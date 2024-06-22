// A rotated sorted array is a sorted array on which rotation operation
// has been performed some number of times.
// Given a rotated sorted array, find the index of the minimum element in the array.
// Follow 0-based indexing. It is guaranteed that all the elements in the array are unique.

#include <iostream>
#include <vector>
using namespace std;

int minElementInRotatedArray(vector<int> &v)
{
    int l = 0;
    int r = v.size() - 1;

    // corner case - if array is sorted
    if (v[l] <= v[r])
        return l;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        // checking base case
        if (v[mid + 1] < v[mid])
            return mid + 1;
        if (v[mid - 1] > v[mid])
            return mid;

        // reducing search space
        if (v[mid] > v[l])
            l = mid + 1;
        else
            r = mid - 1;
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

    cout << minElementInRotatedArray(v);
    
    return 0;
}