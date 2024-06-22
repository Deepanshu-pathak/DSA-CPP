#include <iostream>
using namespace std;

bool checkEqualSumPartition(int arr[], int size)
{
    int totalSum = 0, prefixSum = 0, suffixSum;
    for (int i = 0; i < size; i++)
    {
        totalSum += arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        prefixSum += arr[i];
        suffixSum = totalSum - prefixSum;
        if (prefixSum == suffixSum)
            return true;
    }
    return false;
}
int main()
{
    int arr[] = {5, 3, 2, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl<<checkEqualSumPartition(arr, size);
    return 0;
}