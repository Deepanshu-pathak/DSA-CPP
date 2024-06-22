#include <iostream>
#include <vector>
using namespace std;

// using quick sort algo to solve
int partition(vector<int> &v, int start, int end)
{
    int pivotElement = v[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (v[j] < pivotElement)
            swap(v[++i], v[j]);
    }

    swap(v[++i], v[end]);
    return i;
}

int kthSmallest(vector<int> &v, int start, int end, int k) // O(n) in average case
// but O(n^2) in worst case,
// in each recursion we are getting close to finding kth smallest element
{
    if (k > 0 and k <= end - start + 1)
    {
        int pivotIndex = partition(v, start, end);
        if (pivotIndex - start == k - 1)
            return v[pivotIndex];
        else if (pivotIndex - start > k - 1)
            return kthSmallest(v, start, pivotIndex - 1, k);
        else
            return kthSmallest(v, pivotIndex + 1, end, k - (pivotIndex - start + 1));
        // k will be changed for right partition
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter Size of array: ";
    cin >> size;

    int k = 8;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    cout << kthSmallest(v, 0, size - 1, k) << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}