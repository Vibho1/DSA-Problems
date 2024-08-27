#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll x1, ll x2, ll y1, ll y2) {
    ll currDis = 0;
            
    currDis += abs(x1 - x2);
    currDis += abs(y1 - y2);

    return currDis;

}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        
        vector<pair<ll, ll>> vec(n);
        
        for(int i = 0; i < n; i++) {
            cin >> vec[i].first;
            cin >> vec[i].second;
        }
        
        if(max(a, b) <= k) cout << 0 << '\n';
        else {
            ll x1 = vec[a - 1].first, y1 = vec[a - 1].second, x2 = vec[b - 1].first, y2 = vec[b - 1].second;
            
            
            ll dis = calc(x1, x2, y1, y2);
            
            ll minX = LLONG_MAX / 2, minY = LLONG_MAX / 2;
                
            for(int i = 0; i < k; i++) {
                ll currX = vec[i].first;
                ll currY = vec[i].second;
                
                ll currXDis = calc(x1, currX, y1, currY);
                if(a <= k) currXDis = 0;
                minX = min(minX, currXDis);
                
                ll currYDis = calc(x2, currX, y2, currY);
                if(b <= k) currYDis = 0;
                minY = min(minY, currYDis);
                
                if(minX + minY < dis) {
                    dis = minX + minY;
                } 
            }
            
            cout << dis << "\n";
        }
    }
}
