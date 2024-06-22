#include <iostream>
using namespace std;

void mergeTwoSortedArrays(int arr1[], int arr2[], int ansArr[], int arr1Size, int arr2Size)
{
    int i = 0, j = 0, k = 0;
    // when both arrays have elements to compare and iterate
    while (i < arr1Size && j < arr2Size)
    {
        if (arr1[i] < arr2[j])
        {
            ansArr[k++] = arr1[i++];
        }
        if (arr1[i] >= arr2[j])
        {
            ansArr[k++] = arr2[j++];
        }
    }

    // arr2 is iterated fully so printing arr1 as it is
    while (i < arr1Size)
    {
        ansArr[k++] = arr1[i++];
    }

    // arr1 is iterated fully so printing arr2 as it is
    while (j < arr2Size)
    {
        ansArr[k++] = arr2[j++];
    }
}
int main()
{
    int arr1[] = {0, 2, 9, 12};
    int arr2[] = {1, 3, 4, 5, 7, 8};

    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

    int ansArr[arr1Size + arr2Size];

    mergeTwoSortedArrays(arr1, arr2, ansArr, arr1Size, arr2Size);

    // output array
    for (int i = 0; i < arr1Size + arr2Size; i++)
    {
        cout << ansArr[i] << " ";
    }
    return 0;
}