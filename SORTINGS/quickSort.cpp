#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int start, int end)
{
    int pivotElement = v[end]; // taking last element as pivotElement
    int i = start - 1;         // for inserting elements less than pivotElement
    // j -> for finding elements less than pivotElement

    for (int j = start; j < end; j++)
    {
        if (v[j] < pivotElement)
            swap(v[++i], v[j]); // first incrementing i then swapping
    }

    // after this loop executes i is pointing to last element less than pivotElement
    // so correct place for pivotElement will be i+1
    swap(v[++i], v[end]);
    return i;
}

// unstable sorting algo -- change the order of elements if they are same
void quickSort(vector<int> &v, int start, int end) // O(nlogn), but O(n^2) in worst case
{
    if (start < end)
    {
        int pivotIndex = partition(v, start, end);
        quickSort(v, start, pivotIndex - 1);
        quickSort(v, pivotIndex + 1, end);
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

    quickSort(v, 0, size - 1);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}