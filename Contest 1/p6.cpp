#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> material(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> material[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));
    int maxSize = 0;
    int maxCount = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (material[i][j] == 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1; 
                } else {
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                }
                if (dp[i][j] > maxSize) {
                    maxSize = dp[i][j];
                    maxCount = 1;
                } else if (dp[i][j] == maxSize) {
                    maxCount++;
                }
            }
        }
    }

    cout << maxSize * maxCount << endl;

    return 0;
}