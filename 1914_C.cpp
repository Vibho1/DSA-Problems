// Quests

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(vector<int>& first, vector<int>& second, int n, int k) {
    
    int ans = 0, currSum = 0, maxB = 0;
    
    for(int i = 0; i < n; i++) {
       currSum += first[i];
       maxB = max(maxB, second[i]);
       if(k - (i +1) == 0) {
           ans = max(ans, currSum);
           break;
       }
       ans = max(ans, currSum + (k - (i + 1)) * maxB);
    }
    cout << ans << "\n";
}

int main() {
    
    int t;
    cin >> t;
    
    while(t--) {
    int n, k;
    cin >> n >> k;
    
    vector<int> first(n);
    for(int i = 0; i < n; i++) cin >> first[i];
    
    vector<int> second(n);
    for(int i = 0; i < n; i++) cin >> second[i];
    
    
    helper(first, second, n, k);
    
}
    
    
    return 0;
}
