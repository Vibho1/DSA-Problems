// Erase first or Second Letter

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(string s, int n) {
    vector<int> hash(26, 0);
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        if(hash[s[i] - 'a'] == 0) ans += n - i;
        
        hash[s[i] - 'a']++;
    }
    
    cout << ans << "\n";
}

int main() {
    
    int t;
    cin >> t;
    
    while(t--) {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    helper(s, n);
    
}
    
    
    return 0;
}
