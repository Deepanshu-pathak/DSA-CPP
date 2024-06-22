#include <iostream>
using namespace std;

//we can store two return values using pointers from a function
void firstLastOccurenceOfLetter(string str, char ch, int *x, int *y) 
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            *x = i;
            break;
        }
    }
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == ch)
        {
            *y = i;
            break;
        }
    }
}
int main()
{
    string str = "aaabcab";
    char ch = 'c';

    int firstIndex = -1;
    int lastIndex = -1;

    int *p1 = &firstIndex;
    int *p2 = &lastIndex;

    firstLastOccurenceOfLetter(str, ch, p1, p2);

    cout<<firstIndex<<" "<<lastIndex;
    return 0;
}