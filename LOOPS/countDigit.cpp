#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    cout << "No, of digits : " << count;
    return 0;
}