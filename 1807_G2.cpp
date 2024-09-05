// Subsequence Addition(Hard Version)

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i = 0; i < n; i++) cin >> vec[i];
        
        sort(vec.begin(), vec.end());
        
        ll currSum = 1;

        bool flag = false;
        
        if(vec[0] != 1) {
            flag = true;
        }
        
        for(int i = 1; i < n; i++) {
            if(currSum < vec[i]) {
                flag = true;
                break;
            }
            currSum += vec[i];
        }
        
        if(!flag) cout << "YES";
        else cout << "NO";
        
        cout << "\n";
    }
    
    return 0;
}
