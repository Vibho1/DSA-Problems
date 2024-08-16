// Move brackets

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(string s) {
    
    ll ans = 0;
    ll curr = 0;
    
    
    for(char c : s) {
        if(c == '(') curr++;
        else curr--;
        
        if(curr < 0) {
        ans = max(ans, abs(curr));
        }
    }
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll n;
        cin >> n;
        
        string s;
        cin >> s;
        

        helper(s);
        
    }
    
    return 0;
}
