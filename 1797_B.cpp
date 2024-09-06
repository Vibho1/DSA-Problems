// Li Hua & Pattern

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<vector<int>> vec(n, vector<int>(n));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) cin >> vec[i][j];
        }
        
        int er = n - 1, ec = n - 1, sr = 0, sc = 0;
        
        while(true) {
            if(sc >= n) {
                sr++;
                sc = 0;
            }
            if(ec < 0) {
                er--;
                ec = n - 1;
            }
            if(sr > er) break;
            if(sr == er && sc >= ec) break;
            
            if(vec[sr][sc] != vec[er][ec]) k--;
            if(k < 0) break;
            sc++;
            ec--;
        }
        
        if(k >= 0 && k % 2 == 0) cout << "YES";
        else if(n % 2 == 1 && k % 2 == 1 && k > 0) cout << "YES";
        else cout << "NO";
        
        cout << "\n";
    }
}
