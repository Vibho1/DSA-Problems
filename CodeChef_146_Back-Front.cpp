// Unsolved

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int currB = 0, currA = 0, currC = 0, currK = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == 'b') currB++;
            else if(s[i] == 'a') {
                if(currB > 0) {
                    currA++;
                    currB--;
                }
            }
            else if(s[i] == 'c') {
                if(currA > 0) {
                    currC++;
                    currA--;
                }
            }
            else if(s[i] == 'k') {
                if(currC > 0) {
                    currK++;
                    currC--;
                }
            }
        }
        
        int currF = 0, currR = 0, currO = 0, currN = 0, currT = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == 'f') currF++;
            else if(s[i] == 'r') {
                if(currF > 0) {
                    currR++;
                    currF--;
                }
            }
            else if(s[i] == 'o') {
                if(currR > 0) {
                    currO++;
                    currR--;
                }
            }
            else if(s[i] == 'n') {
                if(currO > 0) {
                    currN++;
                    currO--;
                }
            }
            else if(s[i] == 't') {
                if(currN > 0) {
                    currT++;
                    currN--;
                }
            }
        }
        

        long long ans = (currK * 3) + (currT * 4);
        
        long long other = currT + currK;
        
        other /= 4;
        ans += other * 3;
        
        cout << n - ans << endl;
    }
}
