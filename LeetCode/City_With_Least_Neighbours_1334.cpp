class Solution {
public:
    void floydWarshall(vector<vector<long>>& adjMat, int n) {

        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    adjMat[i][j] =
                        min(adjMat[i][j], adjMat[i][k] + adjMat[k][j]);
                }
            }
        }
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<long>> adjMat(101, vector<long>(101, INT_MAX));

        for (int i = 0; i < edges.size(); i++) {
            int src = edges[i][0];
            int des = edges[i][1];

            adjMat[src][des] = edges[i][2];
            adjMat[des][src] = edges[i][2];
        }

        floydWarshall(adjMat, n);
        int ans = 0;
        int mini = INT_MAX;

        for(int i = 0; i < n; i++) {
            int curr = 0;
            for(int j = 0; j < n; j++) {
                if(j == i) continue;

                if(adjMat[i][j] <= distanceThreshold) curr++;
            }
            if(curr <= mini) {
                mini = curr;
                ans = i;
            }
        }

        return ans;
    }
};
