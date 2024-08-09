// Valerii Against Everyone

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        unordered_set<int> set;
        
        bool flag = false;
        
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if(set.find(num) != set.end()) {
                flag = true;
            }
            set.insert(num);
        }
        
        if(!flag) cout << "NO";
        else cout << "YES";
        
        cout << "\n";
    }
}
