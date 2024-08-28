#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> vec1(n);
        vector<int> vec2(n);
        vector<int> vec3(n);
        
        ll ans = 0;
        
        for(int i = 0; i < n; i++) cin >> vec1[i];
        for(int i = 0; i < n; i++) cin >> vec2[i];
        for(int i = 0; i < n; i++) cin >> vec3[i];
        
        for(int i = 0; i < n; i++) {
            if(((vec1[i]&x) + (vec1[i]^x)) == x) ans |= vec1[i];
            else break;
        }
        
        for(int i = 0; i < n; i++) {
            if(((vec2[i]&x) + (vec2[i]^x)) == x) ans |= vec2[i];
            else break;
        }
        
        for(int i = 0; i < n; i++) {
            if(((vec3[i]&x) + (vec3[i]^x)) == x) ans |= vec3[i];
            else break;
        }
        
        if(ans == x) cout << "Yes";
        else cout << "No";
        
        cout << "\n";
    }
}
