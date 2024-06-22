#include <iostream>
#include <string.h>
using namespace std;

string removeChar(string str, char ch, int idx = 0)
{
    if (idx == str.size())
        return "";
    if (str[idx] == ch)
        return "" + removeChar(str, ch, idx + 1);
    else
        return str[idx] + removeChar(str, ch, idx + 1);
}
int main()
{
    string s = "abablcyal";
    char ch = 'a'; // remove occurence of this char

    cout << removeChar(s, ch) << endl;

    return 0;
}