#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, q;
        cin >> n >> q;
        
        vector<ll> vec(n);
        vector<int> que;
        
        for(int i = 0; i < n; i++) cin >> vec[i];
        
        for(int i = 0; i < q; i++) {
            int p;
            cin >> p;
            
            if(find(que.begin(), que.end(), p)== que.end()) que.emplace_back(p);
        }
        
        
        
        for(int i = 0; i < que.size(); i++) {
            for(int j = 0; j < n; j++) {
                if(vec[j] % 2 == 0) {
                    
                    int v = (__builtin_ctz(vec[j]));
                    if(que[i] <= v) {
                        int m = que[i] - 1;
                        
                        int add = (1<<m);
                        
                        vec[j] += add;
                    }
                }
            }
        }
        
        for(auto& i : vec) cout << i << " ";
        
        cout << "\n";
    }
}
