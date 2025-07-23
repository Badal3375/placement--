#include <iostream>
#include <vector>
using namespace std;
// Question 1 find lonely number in array
int findLonelyNumber(const vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result ^= num;  // XOR logic
    }
    return result;
}

int main() {
    vector<int> arr = {2, 3, 5, 3, 2};
    cout << "Lonely number: " << findLonelyNumber(arr) << endl;
    return 0;
}
