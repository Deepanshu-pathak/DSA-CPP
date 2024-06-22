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

    int key,count = 0;
    cout<<"Enter ";
    cin>>key;

    for (int i = 0; i < v.size(); i++)
     {
         if (v[i] > key)
         {
             count++;
         }
     }
     cout<<"No. of elements greater than "<<key<<" are "<<count;

    return 0;
}