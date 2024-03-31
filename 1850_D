#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t-->0) {
        int n, k;
        cin >> n >> k;
        vector<int> vec;
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            vec.emplace_back(num);
        }
        sort(vec.begin(), vec.end());
        int count = 0;
        vector<int> diff;
        
        for(int i = 1; i < n; i++) {
            diff.emplace_back(vec[i] - vec[i - 1]);
        }
        
        int maxCons = 0;
        int currCons = 1;
        for(auto i : diff) {
            if(i <= k) currCons++;
            else {
                maxCons = max(maxCons, currCons);
                currCons = 1;
            }
        }
        
        maxCons = max(maxCons, currCons);
        
        cout << n - maxCons << "\n";
    }
}
