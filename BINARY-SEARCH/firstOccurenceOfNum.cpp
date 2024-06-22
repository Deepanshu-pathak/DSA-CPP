#include <iostream>
#include <vector>
using namespace std;

int firstOccurenceInSortedArray(vector<int> &v, int target)
{
    int l = 0;
    int r = v.size() - 1;

    while (l <= r)
    {
        // int mid = (l + r) / 2;
        // we can modify the mid formula for reducing overflow in case l and r are very large

        int mid = l + (r - l) / 2;
        if (v[mid] == target)
        {
            if (v[mid - 1] != target)
                return mid;
            else
                r = mid - 1;
        }
        else if (v[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
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

    cout << firstOccurenceInSortedArray(v, target);

    return 0;
}