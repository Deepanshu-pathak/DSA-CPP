#include <iostream>
#include <vector>
using namespace std;

// max no. of swaps in worst case will be n(n-1)/2 -> O(n^2)
// stable sorting algo -- doesn't change the order of elements if they are same
void bubbleSort(vector<int> &v) // O(n^2)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        bool swaps = false; // for optimisation
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                swaps = true;
            }
        }
        if (!swaps)
            break;
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

    bubbleSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}