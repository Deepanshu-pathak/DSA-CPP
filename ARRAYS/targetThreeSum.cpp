#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 2, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target, triplets = 0;
    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j]+arr[k] == target)
                {
                    cout << arr[i] << " " << arr[j] <<" "<<arr[k] <<endl;
                    triplets++;
                }
            }
        }
    }
    cout << "No. of triplets found " << triplets;

    return 0;
}