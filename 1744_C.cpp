/* 
Welcome to JDoodle!

You can execute code here in 88 languages. Right now you’re in the C++ IDE.

  1. Click the orange Execute button ▶ to execute the sample code below and see how it works.

  2. Want help writing or debugging code? Type a query into JDroid on the right hand side ---------------->

  3. Try the menu buttons on the left. Save your file, share code with friends and open saved projects.

Want to change languages? Try the search bar up the top. 
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        
        int ans = 0;
        int i = 0, j = 0;
        int first = -1;
        
        while(true) {
            
            while(i < n && s[i] != c) {
                i++;
            }
            
            while(j < n) {
                if(s[j] == 'g' && first == -1) first = j;
                if(j > i && s[j] == 'g') break;
                j++;
            }
            
            if(first == -1) first = j;
            
            if(i < n && j < n) {
                if(i < j) ans = max(ans, j - i);
                else {
                    int dis = (n - (i + 1)) + (first + 1);
                    ans = max(ans, dis);
                }
            }
            else if(j >= n && i < n) {
                if(i > first) {
                int dis = (n - (i + 1)) + (first + 1);
                ans = max(dis, ans);
                }
            }
            else break;
            
            i++;
            j++;
        }
        
        if(c == 'g') cout << 0 << endl;
        else {
        cout << ans << endl;
        }
    }
}
