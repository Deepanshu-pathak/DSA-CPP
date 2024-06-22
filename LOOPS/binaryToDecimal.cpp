#include <iostream>
using namespace std;
int main()
{
    int bin_no;
    cout << "Enter any Binary no.\n";
    cin >> bin_no;

    int ans = 0;
    int power = 1;
    while (bin_no > 0)
    {
        int last_digit = bin_no % 10;
        ans += last_digit * power;
        power *= 2;
        bin_no /= 10;
    }
    cout << ans;
    return 0;
}