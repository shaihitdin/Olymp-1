#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
long long a[46][6];
int main() {
	int n;
	cin >> n;
	n--;
	a[0][0] = a[0][1] = 1;
	for (int i = 1; i <= n; i++) {
		a[i][0] = a[i - 1][1];
		if (i > 1)
			a[i][0] += a[i - 1][2] - a[i - 2][0];
		a[i][1] = a[i - 1][0];
		if (i > 1)
			a[i][1] += a[i - 1][2] - a[i - 2][1];
		a[i][2] = a[i - 1][0] + a[i - 1][1];
	}
	cout << a[n][0] + a[n][1];
	return 0;
}
