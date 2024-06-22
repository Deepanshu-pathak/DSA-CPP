#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int> &v, int pos)
{
    int n = v.size();

    // making frequency array of size = 10 (0-9 at once)
    vector<int> freq(10, 0);
    for (int i = 0; i < n; i++)
    {
        freq[(v[i] / pos) % 10]++; // v[i]/pos gives the number with one's, ten's, hundred's place
        // % -> extract the last digit of these places
    }

    // taking prefix sum (cumulative sum of frequencies)
    for (int i = 1; i < 10; i++)
    {
        freq[i] += freq[i - 1];
    }

    vector<int> ans(n); // temp array to store sorted array
    // calculate sorted array
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[(v[i] / pos) % 10]] = v[i];
    }

    // copy ans array to original array
    for (int i = 0; i < n; i++)
    {
        v[i] = ans[i];
    }
}

void radixSort(vector<int> &v) // O(d*n) where d is digits in max element

{
    int mx = INT8_MIN;
    for (int i : v)
    {
        if (i > mx)
            mx = i;
    }

    for (int pos = 1; mx / pos > 0; pos *= 10)
    {
        countSort(v, pos); // looping the countsort until max number becomes zero
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

    radixSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}