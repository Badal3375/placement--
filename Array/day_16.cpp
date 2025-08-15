#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<long long, double> memo;

    double solve(int a, int b) {
        if (a <= 0 && b <= 0) 
        return 0.5; // both empty same time
        if (a <= 0) 
        return 1.0;      // A empty first
        if (b <= 0)
         return 0.0;     // B empty first

        long long key = ((long long)a << 32) | (unsigned int)b;
        if (memo.count(key)) return memo[key];

        double ans = 0.25 * (
            solve(a - 100, b) +
            solve(a - 75, b - 25) +
            solve(a - 50, b - 50) +
            solve(a - 25, b - 75)
        );

        return memo[key] = ans;
    }

    double soupServings(int n) {
        if (n > 4800)
         return 1.0; // optimization for large n
        return solve(n, n);
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    cout << fixed << setprecision(5) << sol.soupServings(n) << endl;
    return 0;
}
