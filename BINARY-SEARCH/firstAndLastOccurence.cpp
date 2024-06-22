#include <iostream>
#include <vector>
using namespace std;

void firstLastIndexInSortedArray(vector<int> &v, int target)
{
    int l = 0;
    int r = v.size() - 1;
    int ans[2] = {-1, -1};

    // for first index
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == target)
        {
            ans[0] = mid;
            r = mid - 1;
        }
        else if (v[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }

    l = 0;
    r = v.size() - 1;
    // for last index
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == target)
        {
            ans[1] = mid;
            l = mid + 1;
        }
        else if (v[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }

    cout << ans[0] << " " << ans[1];
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

    firstLastIndexInSortedArray(v, target);

    return 0;
}