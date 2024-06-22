#include <iostream>
using namespace std;

int sumButAlternateSigns(int num)
{
    if (num < 1)
        return 0;

    return  sumButAlternateSigns(num - 1) + ((num%2==0)? (-num): num);
}
int main()
{
    int num = 5;

    cout << sumButAlternateSigns(num);
    return 0;
}