#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int arr[size];
    cout<<"Enter Elements of Array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout <<"Sum of elements is "<< sum << endl;

    return 0;
}