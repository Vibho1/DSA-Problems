#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool helper(ll n) {
    
    ll curr = n;
    
    while(curr > 0) {
        int num = curr % 10;
        if(num != 0) {
        if(n % num != 0) return false;
        }
        curr /= 10;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll n;
        cin >> n;
        
        ll ans = -1;
        
        for(ll i = n; i <= n + 100000; i++) {
            if(helper(i)) {
                ans = i;
                break;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
