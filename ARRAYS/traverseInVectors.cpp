#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    cout << "Enter elements of vector\n";
    for (int i = 0; i < 5; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }
    // for loop
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert(v.begin() + 2, 8); // position of index then element for insertion
    // for each loop-- iterate through all elements present in array (vector) 
    for (int elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;

    v.erase(v.end() - 2); // position of index to delete element
    // for each loop
    for (int elem : v)
    {
        cout << elem << " ";
    }

    return 0;
}