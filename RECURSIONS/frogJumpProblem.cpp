#include <iostream>
using namespace std;

// There are N stones, numbered 1,2,3...,N. For each i(1<=i<=N), the height of Stone i is hi.
// There is a frog who is initially on stone 1. he will repeat the following action
// some number of times to reach stone N:
// If the frog is currently on stone i, jump to stone i+1 or stone i+2.
// Here a cost of |hi-hj| is incurred, where j is the stone to land on.
// Find the minimun possible total cost incurred before the frog reaches stone N.

int frogJump(int *arr, int n, int i = 0)
{
    int shortJump = abs(arr[i] - arr[i + 1]);
    int bigJump = abs(arr[i] - arr[i + 2]);

    if (i == n - 1)
        return 0;
    if (i == n - 2)
        return frogJump(arr, n, i + 1) + shortJump;

    return min(frogJump(arr, n, i + 1) + shortJump, frogJump(arr, n, i + 2) + bigJump);
}
int main()
{
    int arr[] = {10, 30,20,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << frogJump(arr, n);
    return 0;
}