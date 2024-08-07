// Triple Operations

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int l, r;
        cin >> l >> r;
        
        ll totalOps = 0;
        ll minOps = INT_MAX;
        
        for(int i = l; i <= r; i++) {
            ll prev = totalOps;
            int curr = i;
            while(curr > 0) {
                totalOps++;
                curr /= 3;
            }
            minOps = min(minOps, totalOps - prev);
        }
        
        cout << totalOps + minOps << endl;
    }
}
