#include <iostream>
#include <vector>
using namespace std;

void sortNegativePositive(vector<int> &v)
{
    int l = 0;
    int r = v.size() - 1;

    while (l < r)
    {
        if (v[l] >= 0 and v[r] < 0)
            swap(v[l++], v[r--]);
        else if (v[r] >= 0)
            r--;
        else
            l++;
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

    sortNegativePositive(v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}