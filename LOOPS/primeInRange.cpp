#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) // here we are checking only upto square root of number, it requires less no. of iterations
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int a = 1, b = 50;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}