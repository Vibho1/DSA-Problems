// Triple Operations

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll log_base(ll a, ll b) {
    return log2(a) / log2(b);
}

int main() {
    int testCases;
    cin >> testCases;
    
    ll maxRange = 2 * 1e5 + 1;
    vector<ll> precomputedValues(maxRange + 1);
        
    for(ll i = 0; i <= maxRange; i++) {
        precomputedValues[i] = log_base(i, 3) + 1;
    }
    
    for(ll i = 1; i <= maxRange; i++) {
    precomputedValues[i] += precomputedValues[i - 1];
    }
    
    while(testCases--) {
        int left, right;
        cin >> left >> right;
        
        ll totalOperations = precomputedValues[right] - precomputedValues[left];

        
        cout << totalOperations + (2 * (log_base(left, 3) + 1)) << endl;
    }
}
