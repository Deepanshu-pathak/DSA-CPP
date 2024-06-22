// given an sorted array except two elements are swapped,
// sort in linear time, given no duplicates present
#include <iostream>
#include <vector>
using namespace std;

void twoSwappedElements(vector<int> &v)
{
    int i = 0;
    int j = 1;

    while (j < v.size())
    {
        if (j == v.size() - 1) // corner case
        {
            swap(v[j], v[i]);
            break;
        }

        if (v[j] > v[i])
        {
            i++;
            j++;
        }
        else
        {
            if (v[j + 1] > v[i])
            {
                swap(v[j], v[i]);
                break;
            }
            else
                j++;
        }
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

    twoSwappedElements(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}