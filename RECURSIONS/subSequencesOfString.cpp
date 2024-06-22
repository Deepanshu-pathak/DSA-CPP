#include <iostream>
#include <vector>
using namespace std;

// dry run karo to samajh aayega acche se
void subSequence(string &s, vector<string> &v, string ss = "", int i = 0)
{
    if (i == s.size())
    {
        v.push_back(ss);
        return;
    }

    subSequence(s, v, ss + s[i], i + 1); // adding letter to subsequences
    subSequence(s, v, ss, i + 1);        // not adding letter to subsequences
}
int main()
{
    vector<string> v;
    string s = "abcd";
    subSequence(s, v);
    for (string i : v)
    {
        cout << i << " ";
    }
    return 0;
}