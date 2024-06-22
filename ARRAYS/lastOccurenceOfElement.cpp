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

    int key, index = -1, count = 0;
    cout << "Enter element you want to find last occurence: ";
    cin >> key;

    // iterating from start to get last occurence
    //  for (int i = 0; i < v.size(); i++)
    //  {
    //      if (v[i] == key)
    //      {
    //          index = i;
    //          count++;
    //      }
    //  }

    // one more optimal way to solve -- iterating from last
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == key)
        {
            index = i;
            break;
        }
    }
    cout << "Last occurence of given element is at index " << index << endl;
    // cout << "No. of occurence : " << count << endl;
    return 0;
}