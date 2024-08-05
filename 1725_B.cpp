// Basketball Together

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    
    vector<int> vec(n);
    
    for(int i = 0; i < n; i++) cin >> vec[i];
    
    sort(vec.begin(), vec.end());
    
    int size = n;
    int right = n - 1;
    long long ans = 0;
    
    while(true) {
        int req = (int)ceil((double)d / (double)vec[right]);
        if(d % vec[right] == 0) req++;
        if(size - req >= 0 && right >= 0) {
            size -= req;
            right--;
            ans++;
        }
        else break;
    }
    
    cout << ans << endl;
}
