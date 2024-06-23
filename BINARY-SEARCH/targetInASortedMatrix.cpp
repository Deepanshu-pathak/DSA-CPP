#include <iostream>
#include <vector>
using namespace std;

void binarySearchInMatrix(vector<vector<int>> &v, int target)
{
    int m = v.size();    // rows
    int n = v[0].size(); // cols

    int l = 0;
    int r = m * n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int x = mid / n;
        int y = mid % n;

        if (v[x][y] == target)
        {
            cout << x << " " << y << endl;
            return;
        }
        else if (v[x][y] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << -1 << " " << -1 << endl;
}
int main()
{
    vector<vector<int>> v = {{1, 3, 5, 6}, {8, 11, 19, 21}, {25, 30, 33, 39}};
    int target = 2;

    binarySearchInMatrix(v, target);

    return 0;
}