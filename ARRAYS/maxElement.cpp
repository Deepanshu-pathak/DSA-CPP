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
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }

    cout << "Max elements is " << max << endl;

    return 0;
}