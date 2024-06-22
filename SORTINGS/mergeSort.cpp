#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v, int l, int mid, int r)
{
    // create two temp array
    int arr1Size = mid + 1 - l;
    int arr2Size = r - mid;

    int arr1[arr1Size];
    int arr2[arr2Size];

    // copy all elements of two subarrays in these temp arrays
    for (int i = 0; i < arr1Size; i++)
    {
        arr1[i] = v[l + i];
    }
    for (int i = 0; i < arr2Size; i++)
    {
        arr2[i] = v[mid + 1 + i];
    }

    // comparing these two arrays and sorting them in final array
    int i = 0, j = 0, k = l; // i -> initial index of arr1
    // j = initial index of arr2
    // k = initial index of v

    while (i < arr1Size and j < arr2Size)
    {
        if (arr1[i] < arr2[j])
            v[k++] = arr1[i++];
        else
            v[k++] = arr2[j++];
    }
    while (i < arr1Size)
    {
        v[k++] = arr1[i++];
    }
    while (j < arr2Size)
    {
        v[k++] = arr2[j++];
    }
}

// stable sorting algo -- doesn't change the order of elements if they are same
void mergeSort(vector<int> &v, int l, int r) // O(nlogn) , space complexity O(n)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(v, l, mid);
        mergeSort(v, mid + 1, r);
        merge(v, l, mid, r);
    }
}

int main()
{
    int size;
    cout << "Enter Size of array: ";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    mergeSort(v, 0, size - 1);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}
