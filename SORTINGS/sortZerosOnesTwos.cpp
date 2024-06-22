#include <iostream>
#include <vector>
using namespace std;

// using count sort because max element in array is 2
void sort0s1s2s(vector<int> &v) // O(n)
{
    int n = v.size();

    vector<int> freq(3, 0); // only elements upto 2
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    for (int i = 1; i < 3; i++)
    {
        freq[i] += freq[i - 1];
    }

    vector<int> ans(n); // temp array to store sorted array
    // calculate sorted array
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[v[i]]] = v[i];
    }

    // copy ans array to original array
    for (int i = 0; i < n; i++)
    {
        v[i] = ans[i];
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

    sort0s1s2s(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}