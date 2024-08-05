#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll n, x;
        cin >> n >> x;
        
        int res = 0;
        ll mini = INT_MAX, maxi = INT_MIN;
        
        for(int i = 1; i <= n; i++) {
            ll num;
            cin >> num;
            mini = min(mini, num);
            maxi = max(maxi, num);
            
            if(maxi - mini > 2 * x) {
                res++;
                maxi = mini = num;
            }
        }
        
        cout << res << "\n";
        }
    }
