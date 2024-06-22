#include <iostream>
using namespace std;

int nthFibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

int main()
{
    // index-- 0 1 2 3 4 5 6 7  8  9  10
    // series  0 1 1 2 3 5 8 13 21 34 55....
    int n;
    cout << "Enter n :";
    cin >> n;

    cout << nthFibonacci(n);
    return 0;
}