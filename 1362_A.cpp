// Johnny and Ancient Computer

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(ll a, ll b) {
    
    int ops = 0;
    bool flag = false;
    
    while(a != b) {
        if(a * 8 <= b) a *= 8;
        else if(a * 4 <= b) a *= 4;
        else if(a * 2 <= b) a *= 2;
        else {
            flag = true;
            break;
        }
        ops++;
    }
    
    if(!flag) cout << ops;
    else cout << -1;
    
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll a, b;
        cin >> a >> b;
        
        if(a > b) {
            ll temp = a;
            a = b;
            b = temp;
        }
        helper(a, b);
        
    }
    
    return 0;
}
