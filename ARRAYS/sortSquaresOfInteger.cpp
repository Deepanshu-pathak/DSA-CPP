#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int arr[] = {-5, -4, -3, -2, -1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // //using STL library to generate squares of each element and then sort() function to sort them
    // for(int i = 0; i < size; i++){
    //     arr[i] =abs(arr[i]);
    // }
    // sort(arr, arr + size);

    // optimal solution using two pointer, as given array is sorted hence max square can only be found on extreme left or right
    int ansArr[size];
    int leftPtr = 0, rightPtr = size - 1, k = size - 1;

    while (leftPtr <= rightPtr)
    {
        if (abs(arr[leftPtr]) > abs(arr[rightPtr]))
            ansArr[k--] = arr[leftPtr++];
        else
            ansArr[k--] = arr[rightPtr--];
    }

    // output array
    for (int i = 0; i < size; i++)
    {
        cout << ansArr[i] * ansArr[i] << " ";
    }

    return 0;
}