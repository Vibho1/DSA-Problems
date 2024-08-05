// Shoe Shuffling

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> vec(n + 1);
        
        for(int i = 1; i <= n; i++) {
            cin >> vec[i];
        }
        
        int i = 1, j = 2;
        bool flag = false;
        int c = 1;
        
        while(i <= n) {
            while(j <= n && vec[j] == vec[i]) {
                j++;
            }
            if(j - i > 1) {
                for(int k = j - 1; k >= i; k--) {
                    if((j - i) % 2 == 1 && k == i + (j - i) / 2) {
                        vec[c] = k - 1;
                        c++;
                        vec[c] = k;
                        k--;
                    }
                    else {
                    vec[c] = k;
                    }
                    c++;
                }
            }
            else {
                flag = true;
                break;
            }
            i = j;
        }
        
        if(!flag) {
            for(int l = 1; l <= n; l++) cout << vec[l] << " ";
        } else {
            cout << -1;
        }
        
        cout << endl;
    }
}
