#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n >= 0 && n <= 9)
        return n;
    // digit == n%10
    return n % 10 + sumOfDigits(n / 10);
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Sum of Digits: " << sumOfDigits(num);

    return 0;
}