#include <iostream>
#include <math.h>
using namespace std;

int checkArmstrong(int num, int count)
{
    if (num >= 0 and num <= 9)
        return pow(num, count);

    return pow(num % 10, count) + checkArmstrong(num / 10, count);
}
int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    int cnt = 0;
    for (int i = num; i > 0; i /= 10)
    {
        cnt++;
    }

    if (num == checkArmstrong(num, cnt))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}