/*一开始获取nm写成了函数，提交超时，嵌入到main中过了
 * 以为是因为用了函数才这样，很疑惑
 * 后来又交了几遍同一段代码，发现最后一条数据有时候能过有时候超时
 * 参考了一下网上其他人的算法，发现思路都大同小异，这题先留着
 * 如果有好的解法，欢迎你的指教
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N;
int arr[10002];
int ret[10002][10002];
int n, m;

// void getnm() {
	// int i, minn = 99999;
	// for (i = 1; i <= sqrt(N*1.0); i++) {
		// if (N % i == 0) {
			// if (N/i - i < minn) {
				// minn = N / i - i;
				// n = i;
			// }
		// }
	// }
	// m = N / n;
// }

int main() {
	ios::sync_with_stdio(false);
	int i, j;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N, greater<int>());
	// getnm();
	int minn = 99999;
	for (i = 1; i <= sqrt(N*1.0); i++) {
		if (N % i == 0) {
			if (N/i - i < minn) {
				minn = N / i - i;
				n = i;
			}
		}
	}
	m = N / n;
	ret[1][1] = arr[0];
	int x = 1, y = 1, tot = 0;
	while (tot < n * m - 1) {
		while (y + 1 <= n && !ret[x][y+1]) {
			ret[x][++y] = arr[++tot];
		}
		while (x + 1 <= m && !ret[x+1][y]) {
			ret[++x][y] = arr[++tot];
		}
		while (y - 1 > 0 && !ret[x][y-1]) {
			ret[x][--y] = arr[++tot];
		}
		while (x - 1 > 0 && !ret[x-1][y]) {
			ret[--x][y] = arr[++tot];
		}
	}
	for (i = 1; i <= m; i++) {
		cout << ret[i][1];
		for (j = 2; j <= n; j++) {
			cout << ' ' << ret[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
