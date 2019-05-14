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
int seq[10005], maxBefore[10005], maxStart[10005];
int ret, retIndex;

int main() {
	ios::sync_with_stdio(false);
	int i;
	cin >> N;
	ret = -1;
	retIndex = -1;
	for (i = 0; i < N; i++) {
		cin >> seq[i];
		if (!i) {
			maxBefore[i] = seq[i];
			maxStart[i] = i;
		}else{
			if (maxBefore[i-1] >= 0) {
				maxBefore[i] = maxBefore[i-1] + seq[i];
				maxStart[i] = maxStart[i-1];
			}else{
				maxBefore[i] = seq[i];
				maxStart[i] = i;
			}
		}
		if (ret < maxBefore[i]) {
			ret = maxBefore[i];
			retIndex = i;
		}
	}
	if (ret < 0) {
		cout << 0 << ' ' << seq[0] << ' ' << seq[N-1] << endl;
	}else{
		cout << ret << ' ' << seq[maxStart[retIndex]] << ' ' << seq[retIndex] << endl;
	}
	
	return 0;
}
