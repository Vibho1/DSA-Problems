#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> vec(n);

        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        
        sort(vec.begin(), vec.end());
        
        ll ans = 0;
        vector<ll> pref(n + 1, 0);
        
        for(int i = 0; i < n; i++) {
            pref[i + 1] = (ll)(pref[i] + vec[i]);
        } 
        
        for(int i = 0; i < k + 1; i++) {
            ans = max(ans, pref[n - (k - i)] - pref[2 * i]);
        }
        
        cout << ans << "\n";
    }
}
