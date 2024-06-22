#include <iostream>
using namespace std;

bool sortedTargetDifference(int arr[], int size, int target)
{
    int leftPtr = 0, rightPtr =  1;
    while (leftPtr<size && rightPtr<size)
    {
        if (abs(arr[leftPtr] - arr[rightPtr]) == target)
        {
            return true;
        }
        else if (abs(arr[leftPtr] - arr[rightPtr]) > target)
        {
            leftPtr++;
        }
        else
        {
            rightPtr++;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int target;
    cout << "Enter Target:";
    cin >> target;

    bool foundPair = sortedTargetDifference(arr, size, target);
    if (foundPair)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}