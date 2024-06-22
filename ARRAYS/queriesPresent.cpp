// given Q queries, check if the given number is present in the array or not
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size ";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    const int N = 1e5 + 10; // notation for 10 to the power 5
    vector<int> freq(N, 0); // we can also initialise the vector with some value (size, value)
    for (int i = 0; i < size; i++)
    {
        freq[v[i]]++;
    }

    int queries;
    cout << "Enter queries ";
    cin >> queries;

    while (queries > 0)
    {
        int element;
        cout << "Enter element ";
        cin >> element;
        cout << "Frequency " << freq[element] << endl;
        queries--;
    }

    return 0;
}