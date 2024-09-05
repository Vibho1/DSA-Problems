// JoJo's Incredible Adventures

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        int n = s.length();
        s += s;
        
        int maxCount = 0;
        int curr = 1;
        int oC = 0;
        
        if(s[0] == '1') oC++;
        
        for(int i = 1; i < s.length(); i++) {
            if(s[i] == '1' && s[i - 1] == '1') {
                curr++;
            } else {
                curr = 1;
            }
            maxCount = max(maxCount, curr);
            if(s[i] == '1') oC++;
        }
        
        if(oC == 2 * n) {
            cout << (long long)(n) * (long long)(n) << "\n";
            continue;
        }
        
        int low = 1;
        long long ans = 0;
        
        while(maxCount > 0) {
            ans = max(ans, ((long long)low * (long long)maxCount));
            maxCount--;
            low++;
        }
        if(oC == 0) cout << 0;
        else cout << ans;
        
        cout << "\n";
    }
    
    return 0;
}
