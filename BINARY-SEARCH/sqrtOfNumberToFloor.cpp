#include <iostream>
#include <vector>
using namespace std;

int sqrtToFloor(int num)
{
    int l = 1;
    int r = num;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mid * mid <= num)
        {
            if ((mid + 1) * (mid + 1) > num)
                return mid;
            else
                l = mid + 1;
        }
        else
            r = mid - 1;
    }
}
int main()
{
    int num;
    cout << "Enter num ";
    cin >> num;

    cout << sqrtToFloor(num);

    return 0;
}