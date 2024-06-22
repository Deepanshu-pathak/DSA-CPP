#include <iostream>
using namespace std;

void printNaturalNumber(int n)
{
    if (n < 1)
        return;

    printNaturalNumber(n - 1);
    cout << n << " ";
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    printNaturalNumber(num);
    return 0;
}