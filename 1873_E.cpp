#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> vec(n);
        
        int mini = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
            mini = min(mini, vec[i]);
        }
        
        ll left = mini, right = LONG_MAX;
        
        while(left <= right) {
            ll mid = left + (right - left) / 2;
            
            ll curr = 0;
            
            for(int i = 0; i < n; i++) {
                if(vec[i] < mid) curr += mid - vec[i];
                if(curr > x) break;
            }
            
            if(curr <= x) left = mid + 1;
            else right = mid - 1;
        }
        
        cout << right << "\n";
        
    }
}
