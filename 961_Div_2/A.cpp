#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        int cut = 1;
        int curr = n - 1;
        int orig = k;
        k -= n;
        
        while(k > 0) {
            k -= curr;
            if(k > 0) {
                k-= curr;
                cut++;
            }
            cut++;
            curr--;
        }
        if(orig == 0) cout << 0 << endl;
        else {
        cout << cut << endl;
        }
    }
}
