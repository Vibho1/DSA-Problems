// Triangles on a Rectangle

#include <bits/stdc++.h>
#define int1 long long
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int1 w, h;
        cin >> w >> h;
        
        int1 ds, us, ls, rs;
        cin >> ds;
        
        vector<int1> down(ds);
        
        for(int i = 0; i < ds; i++) {
            cin >> down[i];
        }
        
        cin >> us;
        vector<int1> up(us);
        
        for(int i = 0; i < us; i++) {
            cin >> up[i];
        }
        
        cin >> ls;
        vector<int1> left(ls);
        
        for(int i = 0; i < ls; i++) {
            cin >> left[i];
        }
        
        cin >> rs;
        vector<int1> right(rs);
        
        for(int i = 0; i < rs; i++) {
            cin >> right[i];
        }
        
        int1 firstArea = (down[ds - 1] - down[0]) * h;
        int1 secondArea = (up[us - 1] - up[0]) * h;
        int1 thirdArea = (left[ls - 1] - left[0]) * w;
        int1 fourthArea = (right[rs - 1] - right[0]) * w;
        
        cout << max({firstArea, secondArea, thirdArea, fourthArea}) << "\n";
        
    }
}
