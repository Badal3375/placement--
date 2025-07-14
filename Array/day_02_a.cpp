// #include <iostream>
// using namespace std;
// int main()
//{
//
//     int arr[] = {1, 5, 6, 7, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] >= arr[i - 1])
//         {
//         }
//         return false;
//     }
//     return true;
// }
#include <bits/stdc++.h>
using namespace std;

// int main() {
//     vector<int> v = {5, 3, 2, 1, 4};
//
//     // Sort vector (by default in ascending order)
//     sort(v.begin(), v.end());
//
//     for (int i : v)
//         cout << i << " ";
//     return 0;
// }
int main()
{
    int arr[] = {1, 5, 6, 2, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int i : arr)
        cout << i << " " ;
}