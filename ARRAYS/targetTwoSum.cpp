#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 6, 7, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target, pairs = 0;
    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " " << arr[j] << endl;
                pairs++;
            }
        }
    }
    cout << "No. of pairs found " << pairs;

    return 0;
}