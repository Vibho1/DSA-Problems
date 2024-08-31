// Lunatic Never Content

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void inputArr(vector<int>& vec, int n) {
    for(int i = 0; i < n; i++) cin >> vec[i];
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> vec1(n);
        
        inputArr(vec1, n);
        
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            ans = __gcd(ans, abs(vec1[i] - vec1[n - i - 1]));
        }
        
        cout << ans << "\n";
    }
}
