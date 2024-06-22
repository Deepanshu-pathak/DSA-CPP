#include <iostream>
using namespace std;

void sortEvenOdd(int arr[], int size)
{
    int leftPtr = 0, rightPtr = size - 1;
    while (leftPtr < rightPtr)
    {
        if (arr[leftPtr] % 2 != 0 && arr[rightPtr] % 2 == 0)
        {
            // swapping if odd is on left and even is on right
            swap(arr[leftPtr], arr[rightPtr]);
            leftPtr++;
            rightPtr--;
        }
        if (arr[rightPtr] % 2 != 0)
            rightPtr--;
        if (arr[leftPtr] % 2 == 0)
            leftPtr++;
    }
}

int main()
{
    int arr[] = {8, 2, 3, 1, 78, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortEvenOdd(arr, size);

    // output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}