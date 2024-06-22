#include <iostream>
using namespace std;
int main()
{
    int dec_no;
    cout << "Enter any Decimal no.\n";
    cin >> dec_no;

    int ans = 0;
    int power = 1;
    while (dec_no > 0)
    {
        int parity_digit = dec_no % 2;
        ans += parity_digit * power;
        power *= 10;
        dec_no /= 2;
    }
    cout << ans;
    return 0;
}