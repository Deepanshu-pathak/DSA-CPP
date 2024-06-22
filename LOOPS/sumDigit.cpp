#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    cout << "Sum Of Digits : " << sum;
    return 0;
}