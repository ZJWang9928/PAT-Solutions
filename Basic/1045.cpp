#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, tmax, maxIndex;
int ret[100002] = {0};

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	int i, j;
	int n;
	tmax = 0;
	maxIndex = 0;
	for (i = 0; i < N; i++) {
		cin >> n;
		if (n > tmax) { // 大于当前的最大值，一定符合前半个条件
			tmax = n;
			ret[maxIndex++] = n;
		}else{ // 小于当前最大值时反向查看剔除
			for (j = maxIndex - 1; j >= 0; j--) {
				if (ret[j] > n) {
					ret[j] = 0;
					maxIndex--;
				}else{
					maxIndex = j + 1;
					break;
				}
			}
		}
	}
	cout << maxIndex << endl;
	if (maxIndex) {
		for (i = 0; i < maxIndex-1; i++)
			cout << ret[i] << ' ';
		cout << ret[i] << endl;
	}else{
		cout << endl;
	}
	return 0;
}
