//Reverse a Substring

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(string s, int n) {
    
    bool flag = false;
    
    for(int i = 1; i < n; i++) {
        if(s[i] < s[i - 1]) {
            flag = true;
            cout << "YES" << "\n";
            cout << i << " " << i + 1;
            break;
        }
    }
    
    if(!flag) cout << "NO" << "\n";
}

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    helper(s, n);
    
    
    return 0;
}
