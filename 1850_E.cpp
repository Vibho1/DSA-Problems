#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll n, c;
        cin >> n >> c;
        vector<ll> vec(n);
        
        for(int i = 0; i < n; i++) cin >> vec[i];
        
        ll left = 1, right = 1e12; // Use a more realistic upper bound
        
        ll ans = -1;
        while(left <= right) {
            
            ll mid = left + (right - left) / 2;
            
            ll curr = 0;
            bool overflow = false;
            for(int i = 0; i < n; i++) {
                ll term = (2 * mid) + vec[i];
                
                if(term > LLONG_MAX / term) {
                    overflow = true;
                    break;
                }
                
                curr += (term * term);
                
                if(curr > c) {
                    overflow = true;
                    break;
                }
            }
            
            if(!overflow && curr == c) {
                ans = mid;
                break;
            } else if(curr < c && !overflow) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        cout << ans << "\n";
    }
}
