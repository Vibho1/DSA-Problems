// Beautiful Array

#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        
        ll minSum = k * b;
        ll maxSum = ((k - 1) * (n - 1)) + ((k * (b + 1)) - 1);
        
        if(s > maxSum || s < minSum) cout << -1 << "\n";
        else {
            ll ns = s;
            ll c = 0;
            
            while(ns / k != b) {
                cout << k - 1 << " ";
                ns -= (k - 1);
                c++;
            }
            
            while(c < n - 1) {
                cout << 0 << " ";
                c++;
            }
            
            cout << ns << endl;
        }
    }
}
