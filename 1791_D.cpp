// Distinct Split

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        unordered_set<char> set;
        vector<int> hashT(26, 0);
        int totalDistinct = 0;
        
        for(char c : s) {
            hashT[c - 'a']++;
            if(hashT[c - 'a'] == 1) totalDistinct++;
        }
        
        int ans = 0;
        
        int i = 0;
        
        while(i < n) {
            set.insert(s[i]);
            hashT[s[i] - 'a']--;
            if(hashT[s[i] - 'a'] == 0) totalDistinct--;
            int size = set.size();
            ans = max(ans, size + totalDistinct);
            i++;
        }
        
        cout << ans << endl;
    }
}
