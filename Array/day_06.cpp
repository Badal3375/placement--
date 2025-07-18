#include <bits/stdc++.h>
using namespace std;
// Question  majority element in array
int majority_element(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int candidate = arr[n/2];
    int count = 0;
    for (int i : arr)
    {
        if (i == candidate)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return candidate;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 2, 1, 2, 2, 1};
    int ans = majority_element(arr);
    cout << ans << endl;
}