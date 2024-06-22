#include <iostream>
using namespace std;

void sortZerosOnes(int arr[], int size)
{
    // counting no. of zeros
    int countZeros = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            countZeros++;
    }

    // initial values will be 0 equal to no. of zeros then else is 1
    for (int i = 0; i < size; i++)
    {
        if (i < countZeros)
            arr[i] = 0;
        else
            arr[i] = 1;
    }
}

void sortBySwap(int arr[], int size)
{
    int leftPtr = 0, rightPtr = size - 1;
    while (leftPtr < rightPtr)
    {
        if (arr[leftPtr] == 1 && arr[rightPtr] == 0)
        {
            // swapping if one is on left and zero is on right
            swap(arr[leftPtr], arr[rightPtr]);
            leftPtr++;
            rightPtr--;
        }
        // if one is already on right just moving ptr to left by one
        if (arr[rightPtr] == 1)
            rightPtr--;
        if (arr[leftPtr] == 0)
            leftPtr++;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // // one way to solve the problem
    // sortZerosOnes(arr, size);

    // //Another way to solve require extra array but single loop
    // int ansArr[size];
    // int j = 0, k = size - 1;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == 0)
    //         ansArr[j++] = arr[i];
    //     else
    //         ansArr[k--] = arr[i];
    // }

    ////optimal way to solve require original array and single loop
    sortBySwap(arr, size);

    // output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        // cout << ansArr[i] << " ";
    }
    return 0;
}