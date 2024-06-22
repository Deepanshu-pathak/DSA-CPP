#include <iostream>
using namespace std;

void printKMultiples(int num, int k)
{
    if (k == 0)
        return;
    printKMultiples(num, k - 1);
    cout << num * k << " ";
}
int main()
{
    int num = 6;
    int multiples = 7;

    printKMultiples(num, multiples);
    return 0;
}