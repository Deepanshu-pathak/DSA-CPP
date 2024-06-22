#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int arr[size];
    cout << "Enter Elements of Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key, index = -1;
    cout << "Enter Element to Search ";
    cin >> key;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    cout << "Index at which key element is present is " << index << endl;

    return 0;
}