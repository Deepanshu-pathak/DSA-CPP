// given a mountain array of length graeter than 3, return the index 'i' such that
// a[0]<a[1]....<a[i-1]<a[i]>a[i+1]....>a[size-1]. This index is known as peak index.

#include <iostream>
#include <vector>
using namespace std;

int findPeakIndex(vector<int> &v)
{
    int l = 0;
    int r = v.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mid == 0) // edge case leftmost array
        {
            if (v[mid] > v[mid + 1])
                return mid;
            else
                return mid + 1;
        }
        else if (mid == v.size() - 1) // edge case rightmost array
        {
            if (v[mid] > v[mid - 1])
                return mid;
            else
                return mid - 1;
        }
        else
        {
            if (v[mid] > v[mid - 1] and v[mid] > v[mid + 1])
                return mid;
            else if (v[mid] < v[mid - 1]) // right side of mountain
                r = mid - 1;
            else // left side of mountain
                l = mid + 1;
        }
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

    cout << findPeakIndex(v);

    return 0;
}