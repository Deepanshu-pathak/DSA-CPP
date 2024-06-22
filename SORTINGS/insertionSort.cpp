#include <iostream>
#include <vector>
using namespace std;

// stable sorting algo -- doesn't change the order of elements if they are same
void insertionSort(vector<int> &v) // O(n^2) but O(n) in best case
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int current = v[i];
        int j = i - 1;
        while (j >= 0 and v[j] > current)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = current;
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

    insertionSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}