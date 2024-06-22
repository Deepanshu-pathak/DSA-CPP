#include <iostream>
using namespace std;
int main()
{

    // for loop for upper triangle
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int k = 0; k < space; k++)
        {
            cout << "  ";
        }
        int no_of_char = 2 * i - 1;
        for (int j = 0; j < no_of_char; j++)
        {
            char ch = (char)('A' + j);
            cout << ch << " ";
        }
        cout << endl;
    }

    // loop for lower triangle
    for (int i = n + 1; i <= 2 * n - 1; i++)
    {
        int space = i - n;
        for (int k = 0; k < space; k++)
        {
            cout << "  ";
        }
        int no_of_char = 2 * (2 * n - i) - 1; // logic to be remmeber
        for (int j = 0; j < no_of_char; j++)
        {
            char ch = (char)('A' + j);
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}