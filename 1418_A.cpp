// Buying Torches

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;
        
        ll currOps = 1 + k;
        ll increment = x - 1;
        ll minReq = ((y + 1) * k) - x;

        if (minReq > 0) {
            currOps += (minReq + increment - 1) / increment;
        }
        
        cout << currOps << "\n";
    }
}
