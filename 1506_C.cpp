// Double-ended Strings

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s, p;
        cin >> s;
        cin >> p;
        
        int lcs = 0;
        int len1 = s.size();
        int len2 = p.size();
        
        for(int i = 0; i < len1; i++) {
            for(int j = 0; j < len2; j++) {
                int k = i;
                int prev = k;
                int c = j;
                
                while(k < len1 && c < len2) {
                    if(s[k] == p[c]){
                         k++;
                         c++;
                    }
                    else break;
                }
                lcs = max(lcs, k - i);
            }
        }
        
        cout << (len1 + len2) - 2 * lcs << endl;
        
        
    }
}
