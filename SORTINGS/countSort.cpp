#include <iostream>
#include <vector>
using namespace std;

// does not work for float numbers

// in case of negative numbers, first subtract negative value from all the elements
// then perform count sort and then add that element in result array

//  stable sorting algo -- doesn't change the order of elements if they are same
void countSort(vector<int> &v) // O(n), if max element is order of n, else O(n+k)
// space complexity O(n+k), using extra space for frequency array and temp array
{
    int n = v.size();

    // finding max element to make frequency array
    int mx = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mx)
            mx = v[i];
    }

    // making frequency array of size = max+1
    vector<int> freq(mx + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    // taking prefix sum (cumulative sum of frequencies)
    for (int i = 1; i < mx + 1; i++)
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

    countSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}