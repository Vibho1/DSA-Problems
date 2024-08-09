// Add and Divide

#include <bits/stdc++.h>

using namespace std;

int find_steps(int a, int b) {
    int steps = 0;
    while (a > 0) {
        a /= b;
        steps++;
    }
    return steps;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int res = INT_MAX;
        int prev = -1;
        
        for (int i = max(2, b); i <= b + 25; ++i) {
            int ans = (i - b) + find_steps(a, i);
            res = min(res, ans);
            prev = res;
        }
        
        cout << res << "\n";
    }
}
