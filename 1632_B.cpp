// Roof Construction

#include <bits/stdc++.h>

using namespace std;

unsigned countBits(unsigned int number) 
{     
    
    return (int)log2(number)+1; 
} 

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int total = countBits(n - 1);
        total--;
        vector<bool> hash(n, false);
        
        for(int i = n - 1; i >= 1<<total; i--) {
            cout << i << " ";
        }
        
        for(int i = 0; i < 1<<total; i++) cout << i << " ";
        
        cout << "\n";
    }
}
