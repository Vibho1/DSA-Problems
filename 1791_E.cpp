// Negatives & Positives

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        ll sum = 0;
        int mini = INT_MAX;
        int c = 0, zc = 0;
        
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            sum += abs(num);
            mini = min(mini, abs(num));
            if(num < 0) c++;
            if(num == 0) zc++;
        }
        
        if(c % 2 == 1 && (c + zc) % 2 == 1) sum -= 2 * mini;
        cout << sum << "\n";
    }
}
