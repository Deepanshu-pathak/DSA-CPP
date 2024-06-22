#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 3, 1, 1, 2, -1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++)
    {
        arr[i] += arr[i - 1];
    }

    // output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}