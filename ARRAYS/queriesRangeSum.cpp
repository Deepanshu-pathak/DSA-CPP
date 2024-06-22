#include <iostream>
using namespace std;

int queriesRangeSum(int arr[], int start, int end)
{
    if (start == 1)
        return (arr[end - 1]);
    else
        return (arr[end - 1] - arr[start - 2]);
}

int main()
{
    int arr[] = {5, 3, 2, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // making array of prefix sum
    for (int i = 1; i < size; i++)
    {
        arr[i] += arr[i - 1];
    }

    int queries;
    cout << "Enter Queries: ";
    cin >> queries;

    for (int i = 0; i < queries; i++)
    {
        int l, r;
        cout << "Enter Range: ";
        cin >> l >> r;
        cout << "Sum :" << queriesRangeSum(arr, l, r) << endl;
    }

    return 0;
}