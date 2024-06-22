#include <iostream>
#include <vector>
using namespace std;

void sortNegativePositiveWithoutChangingOrder(vector<int> &v)
// O(n) but space complexity is also O(n)
{
    vector<int> neg;
    vector<int> pos;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
            neg.push_back(v[i]);
        else
            pos.push_back(v[i]);
    }

    int k = 0;
    for (int i = 0; i < neg.size(); i++)
        v[k++] = neg[i];
    for (int i = 0; i < pos.size(); i++)
        v[k++] = pos[i];
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

    sortNegativePositiveWithoutChangingOrder(v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}