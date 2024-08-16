// Bogosort

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(vector<int>& vec, int n) {
    
    sort(vec.rbegin(), vec.rend());
    
    for(int i : vec) cout << i << " ";
    
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i = 0; i < n; i++) cin >> vec[i];
        
        helper(vec, n);
    }
    
    return 0;
}
