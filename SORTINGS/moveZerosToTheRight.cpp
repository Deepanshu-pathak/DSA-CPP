#include <iostream>
#include <vector>
using namespace std;

// using bubble sort algo for this problem
void zerosToRight(vector<int> &v) // O(n^2)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        bool swaps = false; // for optimisation
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] == 0 and v[j + 1] != 0)
            {
                swap(v[j], v[j + 1]);
                swaps = true;
            }
        }
        if (!swaps)
            break;
    }
}

void zerosToRightOptimised(vector<int> &v) // O(n)
{
    int n = v.size();
    int i = 0, j = 1; // two pointer approach
    while (j < n)
    {
        if (v[i] == 0 and v[j] != 0)
        {
            swap(v[i], v[j]);
            i++;
            j++;
        }
        else if (v[i] == 0 and v[j] == 0)
        {
            j++;
        }
        else
        {
            i++;
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

    // zerosToRight(v);
    zerosToRightOptimised(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}