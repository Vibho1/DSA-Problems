// Counting Orders

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> vec1(n);
        vector<int> vec2(n);

        for(int i = 0; i < n; i++) {
            cin >> vec1[i];
        }
        
        for(int i = 0; i < n; i++) {
            cin >> vec2[i];
        }
        
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        
        
        int j = 0;
        ll ans = 1;
        ll mod = 1e9 + 7;
        
        for(int i = 0; i < n; i++) {
            while(j < n && vec2[j] < vec1[i]) {
                j++;
            }
            ans = (ans *  (j - i)) % mod; 
        }
        
        cout << ans;
        cout << "\n";
    }
}
