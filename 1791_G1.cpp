// Teleporters(Easy Version)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, c;
        cin >> n >> c;
        
        vector<ll> vec(n);
        for(int i = 0; i < n; i++) {
            ll num;
            cin >> num;
            
            vec[i] = num + (i + 1);
        }
        
        sort(vec.begin(), vec.end());
        
        int ans = 0;
        
        for(auto& i : vec) {
            c -= i;
            if(c < 0) break;
            ans++;
        }
        
        cout << ans << "\n";
    }
}
