// Different Divisors

#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<bool> sieve(int maxi) {
    vector<bool> sie(maxi + 1, false);
    
    for(int i = 2; i * i <= maxi; i++) {
        for(int j = i + i; j <= maxi; j += i) {
            sie[j] = true;
        }
    }
    
    
    
    return sie;
}

int main() {
    int t;
    cin >> t;
    
    vector<bool> erato = sieve(20021);
    
    while (t--) {
        int d;
        cin >> d;
        
        ll first = -1, second = -1;
        
        for(int i = d + 1; i <= 20021; i++) {
            if(erato[i] == false) {
                first = i;
                break;
            }
        }
        
        for(int i = first + d; i <= 20021; i++) {
            if(erato[i] == false) {
                second = i;
                break;
            }
        }
        
        cout << first * second << "\n";
    }
}
