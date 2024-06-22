#include <iostream>
#include <vector>
using namespace std;

// using selection sort
void sortStrings(vector<string> &v) // O(n^2),also O(n^2) in best case
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min])
            {
                min = j;
            }
        }
        if (min != i)
            swap(v[min], v[i]);
    }
}
int main()
{
    int size;
    cout << "Enter Size of array: ";
    cin >> size;

    vector<string> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    sortStrings(v);

    for (string i : v)
    {
        cout << i << " ";
    }
    return 0;
}