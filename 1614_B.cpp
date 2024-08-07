// Divan & a new Project

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<pair<ll, ll>> vec(n);
        
        for(int i = 0; i < n; i++) {
            ll num;
            cin >> num;
            vec[i] = {num, i + 1};
        }
        
        sort(vec.begin(), vec.end(), greater<pair<ll, ll>>());
        
        vector<ll> res(n + 1);
        ll currDis = 1;
        ll currNeg = -1;
        bool flag = false;
        
        ll ans = 0;
        
        res[0] = 0;
        
        for(auto& i : vec) {
            ll times = i.first;
            ll idx = i.second;
            
            if(!flag) {
            res[idx] = currDis;
            ans += 2 * abs(currDis * times);
            currDis++;
            flag = true;
            }
            else {
                res[idx] = currNeg;
                ans += 2 * abs(currNeg * times);
                currNeg--;
                flag = false;
            }
        }
        
        cout << ans << endl;
        for(int i : res) cout << i << " ";
        cout << "\n";
    }
}
