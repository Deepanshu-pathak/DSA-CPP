#include <iostream>
#include <vector>
using namespace std;

void sumOfSubsets(int arr[], int n, vector<int> &result, int i = 0, int sum = 0)
{
    if (i == n)
    {
        (result.push_back(sum));
        return;
    }

    sumOfSubsets(arr, n, result, i + 1, sum + arr[i]);
    sumOfSubsets(arr, n, result, i + 1, sum);
}
int main()
{
    int a[] = {4, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> result;
    sumOfSubsets(a, n, result);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}