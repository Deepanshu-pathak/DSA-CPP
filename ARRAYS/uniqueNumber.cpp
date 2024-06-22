#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 3, 9, 2, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            //array manipulation
            if (arr[i] == arr[j])
            {
                arr[i] = -1;
                arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            cout <<"\nUnique number: "<< arr[i] << endl;
        }
    }
    return 0;
}