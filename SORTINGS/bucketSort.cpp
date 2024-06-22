#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// used in case of floating numbers and between (0-1)
void bucketSort(vector<float> &v)
{
    int n = v.size();

    vector<vector<float>> bucket(n, vector<float>());

    // inserting elements in bucket
    for (int i = 0; i < n; i++)
    {
        int index = v[i] * n;
        bucket[index].push_back(v[i]);
    }

    // sorting individual buckets
    for (int i = 0; i < n; i++)
    {
        if (!bucket[i].empty())
        {
            sort(bucket[i].begin(), bucket[i].end());
        }
    }

    // combining all buckets in final array
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            v[k++] = bucket[i][j];
        }
    }
}

// if ranges are scatterd from 0 to 10 to 20 etc
void bucketSortForBigRange(vector<float> &v) // O(n^2) but O(n+k) in average case
// space complexity O(n+k)
{
    int n = v.size();

    vector<vector<float>> bucket(n, vector<float>());

    float max_elem = v[0];
    float min_elem = v[0];

    for (int i = 1; i < n; i++)
    {
        max_elem = max(max_elem, v[i]);
        min_elem = min(min_elem, v[i]);
    }
    float range = (max_elem - min_elem) / n;

    // inserting elements in bucket
    for (int i = 0; i < n; i++)
    {
        int index = (v[i] - min_elem) / range;
        // boundary max element
        float diff = (v[i] - min_elem) / range - index;
        if (diff == 0 and v[i] != min_elem)
        {
            bucket[index - 1].push_back(v[i]);
        }
        else
        {
            bucket[index].push_back(v[i]);
        }
    }

    // sorting individual buckets
    for (int i = 0; i < n; i++)
    {
        if (!bucket[i].empty())
        {
            sort(bucket[i].begin(), bucket[i].end());
        }
    }

    // combining all buckets in final array
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            v[k++] = bucket[i][j];
        }
    }
}
int main()
{
    int size;
    cout << "Enter Size of array: ";
    cin >> size;

    vector<float> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    // bucketSort(v);
    bucketSortForBigRange(v);

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}