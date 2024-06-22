#include <iostream>
using namespace std;

//without the use of strings logic is tough to get here
bool checkPalindrome(int num, int *temp)
{
    if (num >= 0 && num <= 9)
    {
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }
    bool result = (checkPalindrome(num / 10, temp) && (num % 10 == (*temp) % 10));
    (*temp) /= 10;
    return result;
}
int main()
{
    int num = 43234;
    int sameNum = num;

    int *temp = &sameNum;

    if(checkPalindrome(num, temp))cout<<"Palindrome Number";
    else cout<<"Not a Palindrome";

    return 0;
}