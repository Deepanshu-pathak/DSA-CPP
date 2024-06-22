#include <iostream>
#include <vector>
using namespace std;

int targetInSortedRotatedArray(vector<int> &v, int target)
{
    int l = 0;
    int r = v.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == target)
            return mid;

        if (v[mid] >= v[l])
        {
            if (target >= v[l] and target <= v[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (target >= v[mid] and target <= v[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
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

    cout << targetInSortedRotatedArray(v, target);

    return 0;
}