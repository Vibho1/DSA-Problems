// Numbers Box

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> vec(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> vec[i][j];
            }
        }

        int sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sum += abs(vec[i][j]);
            }
        }

        int minAbsVal = INT_MAX;
        int negativeCount = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vec[i][j] < 0) {
                    negativeCount++;
                }
                minAbsVal = min(minAbsVal, abs(vec[i][j]));
            }
        }

        if (negativeCount % 2 != 0) {
            sum -= 2 * minAbsVal;
        }

        cout << sum << "\n";
    }
}
