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
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    bool sorted = true;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > v[i + 1])
        {
            sorted = false;
            break;
        }
    }
    cout << endl<< sorted ;

    return 0;
}