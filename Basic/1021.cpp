#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string N;
int ret[12];

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	int i;
	memset(ret, 0, sizeof(ret));
	for (i = 0; i < N.length(); i++) {
		ret[N[i]-'0']++;
	}
	for (i = 0; i <= 9; i++) {
		if (ret[i])
			cout << i << ":" << ret[i] << endl;
	}
	
	return 0;
}
