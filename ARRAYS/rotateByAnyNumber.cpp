#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // Solution using vectors and reverse function, original array is manipulated
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int rotate;
    cout << "Enter rotation :";
    cin >> rotate;
    rotate %= v.size(); // condition if rotation value is larger than size of vector

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + rotate);
    reverse(v.begin() + rotate, v.end());

    for (int a : v)
    {
        cout << a << " ";
    }

    ////Solution using array required two arrays for solution , more space complexity
    // int arr[] = {1, 2, 3, 4, 5,6,7};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int secondArr[size];

    // int rotate;
    // cout << "Enter rotation :";
    // cin >> rotate;

    // rotate %= size;//condition if rotation value is larger than size of array

    // // copying last Kth elements into secondarray
    // int j = 0;
    // for (int i = size - rotate; i < size; i++)
    // {
    //     secondArr[j++] = arr[i];
    // }

    // //copying starting size-Kth elements into secondarray
    // for(int i=0;i<size-rotate;i++){
    //     secondArr[j++] = arr[i];
    // }

    // //output array
    // for (int i = 0; i < size; i++)
    // {
    //     cout << secondArr[i] << " ";
    // }

    return 0;
}