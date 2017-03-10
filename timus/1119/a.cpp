#include <bits/stdc++.h>
using namespace std;
double dp[1010][1010];
bool a[1010][1010];
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= k; i++) {
		int x, y;
		cin >> x >> y;
		a[x][y] = 1;
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			dp[i][j] =  1000000000;
		}
	}
	dp[0][0] = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + 100);
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + 100);
			if (a[i + 1][j + 1]) 
				dp[i + 1][j + 1] = min(dp[i][j] + sqrt(20000), dp[i + 1][j + 1]);
		}
	}
	cout << int(dp[n][m] + 0.499999999);
	return 0;
}
