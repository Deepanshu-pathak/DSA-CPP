#include <iostream>
#include <vector>
using namespace std;

//  max no. of swaps in worst case will be O(n)
// unstable sorting algo -- change the order of elements if they are same
void selectionSort(vector<int> &v) // O(n^2),also O(n^2) in best case
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

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    selectionSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}