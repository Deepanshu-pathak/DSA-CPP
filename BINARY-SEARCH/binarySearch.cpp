#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &v, int target) // O(logn)
{
    int l = 0;
    int r = v.size() - 1;

    while (l <= r)
    {
        // int mid = (l + r) / 2;
        // we can modify the mid formula for reducing overflow in case l and r are very large

        int mid = l + (r - l) / 2;
        if (v[mid] == target)
            return mid;
        else if (v[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int binarySearchRecursive(vector<int> &v, int target, int l, int r) // O(logn)
{
    if (l <= r)
    {
        // int mid = (l + r) / 2;
        // we can modify the mid formula for reducing overflow in case l and r are very large

        int mid = l + (r - l) / 2;
        if (v[mid] == target)
            return mid;
        else if (v[mid] > target)
            return binarySearchRecursive(v, target, l, mid - 1);
        else
            return binarySearchRecursive(v, target, mid + 1, r);
    }
    return -1;
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

    int target;
    cout << "Enter Target: ";
    cin >> target;

    // cout << binarySearch(v, target);
    cout << binarySearchRecursive(v, target, 0, size - 1);

    return 0;
}