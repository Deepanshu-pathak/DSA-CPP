#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    cout << "Enter elements of vector\n";
    for (int i = 0; i < 6; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    for (int i = 0; i < 6; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            sum += v[i];
        }
        else
        {
            sum -= v[i];
        }
    }
    cout << "Even index values - odd index values = " << sum << endl;

    return 0;
}