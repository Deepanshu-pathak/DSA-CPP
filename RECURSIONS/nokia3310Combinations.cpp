#include <iostream>
#include <vector>
using namespace std;

// logic is great
void keypadComb(string &s, vector<string> &li, vector<string> &v, string result = "", int i = 0)
{
    if (i == s.size())
    {
        li.push_back(result);
        return;
    }
    int digit = s[i] - '0'; // it will convert digit from string to int
    if (digit <= 1)         // because 0 and 1 doesn't contain any alphabets in keypad
    {
        keypadComb(s, li, v, result, i + 1);
        return;
    }
    for (int j = 0; j < v[digit].size(); j++) // v[digit][j] gives letter from
    // alphabet present at index [digit] in 'v' array
    {
        keypadComb(s, li, v, result + v[digit][j], i + 1);
    }
    return;
}
int main()
{
    vector<string> v(10); // mapping strings related to their numbers as in keypad phones
    v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    vector<string> li; // vecotr to store all the combinations
    string s = "23";
    keypadComb(s, li, v);
    for (string i : li)
    {
        cout << i << " ";
    }
    return 0;
}