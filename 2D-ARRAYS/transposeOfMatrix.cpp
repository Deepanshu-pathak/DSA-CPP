#include <iostream>
using namespace std;

int main()
{
    int r1, c1;
    int a[r1][c1];

    cout << "Enter size of First matrix ";
    cin >> r1 >> c1;
    cout << "Enter Elements: ";
    // taking input of matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }

    //printing input matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int ans[c1][r1];
    // transpose of matrix
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            ans[i][j] = a[j][i];
        }
    }

    // printing the answer matrix
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}