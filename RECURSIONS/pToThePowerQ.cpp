#include <iostream>
using namespace std;

int calcPower(int x, int y) // complexity O(n)
{
    if (y == 0)
        return 1;
    return x * calcPower(x, y - 1);
}

int calcPowerOptimised(int x, int y)//complexity O(log(n))
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
    {
        int ans = calcPowerOptimised(x, y / 2);
        return ans * ans;
    }
    else
    {
        int ans = calcPowerOptimised(x, (y - 1) / 2);
        return x * ans * ans;
    }
}

int main()
{
    int a, b;
    cout << "Enter number and its power: ";
    cin >> a >> b;

    cout << a << "^" << b << " = " << calcPower(a, b) << endl;
    cout << a << "^" << b << " = " << calcPowerOptimised(a, b) << endl;


    return 0;
}