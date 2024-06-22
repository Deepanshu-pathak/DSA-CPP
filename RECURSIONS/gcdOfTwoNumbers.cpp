#include <iostream>
using namespace std;

// Euclid's algo -- if we subtract smaller number from the larger number
//  (we can reduce the larger number) but gcd will remain same
//---------------OR---------------------------
// if we divide larger number by smaller number then the remainder and smaller number
// will have the same gcd as of original number

int calcGCD(int a, int b) // thinking that  a>b
{
    if (b > a)
        return calcGCD(b, a); // if b>a
    if (b == 0)
        return a;

    calcGCD(b, a % b);
}
int main()
{
    cout << calcGCD(35, 125) << endl;
    return 0;
}