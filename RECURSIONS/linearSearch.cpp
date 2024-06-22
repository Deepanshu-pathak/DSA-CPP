#include <iostream>
using namespace std;

bool linearSearch(int target, int arr[], int n, int i = 0)
{
    if (i == n)
        return false;
    // if (arr[i] == target)
    //     return true;
    // return linearSearch(target, arr, n, i + 1);

    // above commented code can also be written as:
    return (arr[i] == target) || linearSearch(target, arr, n, i + 1);
}
int main()
{
    int arr[] = {15, 10, 20, 24, 76};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 10;

    if (linearSearch(target, arr, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}