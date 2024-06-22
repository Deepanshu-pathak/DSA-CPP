#include <iostream>
using namespace std;

int sortedTargetSum(int arr[], int size, int target)
{
    int leftPtr = 0, rightPtr = size - 1, countPair = 0;
    while (leftPtr < rightPtr)
    {
        if (arr[leftPtr] + arr[rightPtr] == target)
        {
            countPair++;
            rightPtr--;
            leftPtr++;
        }
        else if (arr[leftPtr] + arr[rightPtr] > target)
        {
            rightPtr--;
        }
        else
        {
            leftPtr++;
        }
    }
    return countPair;
}
int main()
{
    int arr[] = {3, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    // output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int target;
    cout << "Enter Target:";
    cin >> target;

    int countPair = sortedTargetSum(arr, size, target);
    if (countPair)
        cout << countPair << " Unique Pair Found" << endl;
    else
        cout << "No Pairs Found" << endl;
    return 0;
}