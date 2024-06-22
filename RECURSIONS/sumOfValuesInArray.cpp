#include <iostream>
using namespace std;

int sumValue(int arr[], int size, int idx)
{
    if (idx == size - 1)
        return arr[idx];
    return arr[idx] + sumValue(arr, size, idx + 1);
}
int main()
{
    int arr[] = {4, 1, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << sumValue(arr, size, 0) << endl;

    return 0;
}