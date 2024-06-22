#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int max = INT8_MIN, index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    int arr[] = {11, 22, 3, 65, 65, 45, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // //this is one of the solution
    // int maxIndex = findMax(arr, size);
    // int maxElement = arr[maxIndex];
    // // this is optimal solution even if largest element is present more than once
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == maxElement)
    //     {
    //         arr[i] = -1;
    //     }
    // }
    // cout << "Second Largest element : " << arr[findMax(arr, size)] << " at index " << findMax(arr, size) << endl;

    // this is another solution more optimal with less time complexity
    int secondMax = INT8_MIN, secondMaxIndex;
    int maxIndex = findMax(arr, size);
    int maxElement = arr[maxIndex];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > secondMax && arr[i] != maxElement)
        {
            secondMax = arr[i];
            secondMaxIndex = i;
        }
    }
    cout << "Second Largest element : " << secondMax << " at index " << secondMaxIndex << endl;

    return 0;
}