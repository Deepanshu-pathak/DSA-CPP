#include <iostream>
using namespace std;

int main()
{
    int r1, c1;
    int a[r1][c1];

    cout << "Enter size of First matrix ";
    cin >> r1 >> c1;
    cout << "Enter Elements: ";
    // taking input of first matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }

    int r2, c2;
    int b[r2][c2];
    
    cout << "Enter size of Second matrix ";
    cin >> r2 >> c2;
    cout << "Enter Elements: ";
    // taking input of second matrix
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }

    if (c1 != r2)
    {
        cout << "Product not possible" << endl;
    }

    int ans[r1][c2];
    // multiplying both matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int value = 0;
            for (int k = 0; k < r2; k++)
            {
                value += a[i][k] * b[k][j];
            }
            ans[i][j] = value;
        }
    }

    // printing the product matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}