#include <iostream>
using namespace std;

int countAllPaths(int row, int col, int i = 0, int j = 0)
{
    if (i == row || j == col)
        return 0;
    if (i == row - 1 and j == col - 1)
        return 1;

    return countAllPaths(row, col, i + 1, j) + countAllPaths(row, col, i, j + 1);
}
int main()
{
    int row = 2;
    int col = 3;

    cout << countAllPaths(row, col);

    return 0;
}