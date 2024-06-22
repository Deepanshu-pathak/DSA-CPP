#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) << endl; //return size of array in bytes
    cout << sizeof(arr) / sizeof(arr[0]); //return number of elements (size) of array
    return 0;
}