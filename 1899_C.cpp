// Yarik & Array

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        
        for(int i = 0; i < n; i++) cin >> vec[i];
        
        ll maxSum = vec[0];
        ll currentSum = vec[0];
        
        for(int i = 1; i < n; i++) {
            currentSum = max(currentSum, 0ll);
            if((abs(vec[i] % 2) == 0 && abs(vec[i - 1] % 2) == 1) || (abs(vec[i] % 2) == 1 && abs(vec[i - 1] % 2) == 0)) {
                currentSum += vec[i];
            } else {
                currentSum = vec[i];
            }
            maxSum = max(maxSum, currentSum);
        }
        
        cout << maxSum << "\n";
    }
}
