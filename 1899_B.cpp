#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        
        for(int l = 0; l < n; l++) cin >> vec[l];
        
        ll maxi = 0;
        
        for(int k = 1; k <= n / 2; k++) {
            if(n % k == 0) {
                ll miniSum = 1e18, maxiSum = -1e18;
                for(int i = 0; i < n; i += k) {
                    int j = i;
                    ll currSum = 0;
                    while(j < i + k) {
                        currSum += vec[j];
                        j++;
                    }
                    miniSum = min(miniSum, currSum);
                    maxiSum = max(maxiSum, currSum);
                }
                maxi = max(maxi, maxiSum - miniSum);
            }
        }
        
        cout << maxi << "\n";
    }
}
