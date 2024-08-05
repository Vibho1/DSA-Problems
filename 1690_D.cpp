// Black and White Stripe

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int i = 0, j = 0;
        int bCount = 0;
        int ans = INT_MAX;
        

        while(j < n) {
            if(s[j] == 'B') bCount++;
            int len = j - i + 1;
            
            if(len == k) {
                ans = min(ans, len - bCount);
                if(s[i] == 'B') bCount--;
                i++;
            }
            
            j++;
        }
        
        cout << (ans == INT_MAX ? 0 : ans) << endl;
    }
    
    return 0;
}
