// Collecting Game

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> vec(n);
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        
        vector<int> st = vec;
        
        sort(st.begin(), st.end());
        
        vector<long long> pref(n);
        pref[0] = st[0];

        for(int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + st[i];
        }
        
        vector<int> res(n);
        unordered_map<int, int> ump;
        ump[st[n - 1]] = n - 1;
        
        for(int i = n - 2; i >= 0; i--) {
            while(st[i] == st[i + 1]) i--;
            
            if(pref[i] >= st[i + 1]) {
                ump[st[i]] = ump[st[i + 1]];
            }
            else ump[st[i]] = i;
        }
        
        for(int i = 0; i < n; i++) {
            res[i] = ump[vec[i]];
        }
        
        for(int i : res) cout << i << " ";
        
        cout << "\n";
    }
}
