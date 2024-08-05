// Red Versus Blue

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, r, b;
        cin >> n >> r >> b;
        int c = b + 1;
        
        
        int maxi = ceil((double)r / (double)c);
        int count = 0;

        while(r - maxi > b && b > 0) {
            for(int i = 0; i < maxi; i++) {
                cout << "R";
            }
            
            cout << "B";
            b--;
            r -= maxi;
            count += maxi + 1;
        }
        

        while(r > 0 && b > 0) {
            cout << "R";
            cout << "B";
            r--;
            b--;
            count += 2;
        }
        
        while(r > 0) {
            cout << "R";
            r--;
            count++;
        }
        while(b > 0) {
            cout << "B";
            b--;
            count++;
        }
        
        cout << endl;
    }
    
    return 0;
}
