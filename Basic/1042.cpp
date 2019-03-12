#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string take;
int cnt[300] = {0};

int main() {
	ios::sync_with_stdio(false);
	getline(cin, take);
	int i;
	for (i = 0; i < take.length(); i++) {
		if (isalpha(take[i])) {
			// cout << take[i] << endl;
			cnt[take[i]]++;
		}
	}
	int ret = -1;
	char retc;
	for (i = 65; i <= 90; i++) {
		if (cnt[i]+cnt[i+32] > ret) {
			retc = (char)(i+32);
			ret = cnt[i]+cnt[i+32];
		}
	}
	cout << retc << ' ' << ret << endl;
	
	return 0;
}
