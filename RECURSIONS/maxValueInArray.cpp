#include <iostream>
using namespace std;

int maxValue(int arr[], int size, int idx)
{
    if (idx == size - 1)
        return arr[idx];
    return max(arr[idx], maxValue(arr, size, idx + 1));
}
int main()
{
    int arr[] = {4, 16, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << maxValue(arr, size, 0) << endl;

    return 0;
}