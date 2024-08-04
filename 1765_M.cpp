// Minimum LCM

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;
        
        if(n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << "\n";
        }
        else if(n % 3 == 0) {
            cout << n / 3 << " " << (n * 2) / 3 << "\n";
        }
        else {
            long long ans = -1;
            
            for(int i = 2; i * i <= n; i++) {
                if(n % i == 0) {
                    ans = n / i;
                    break;
                }
            }
            
            if(ans == -1) {
                cout << 1 << " " << n - 1 << endl;
            }
            else {
                cout << ans << " " << n - ans << "\n";
            }
        }
    }
}
