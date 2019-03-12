#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string s;

int main() {
	ios::sync_with_stdio(false);
	cin >> s;
	long long cnt = 0, cntPAT = 0, cntAT = 0;
	int len = s.length();
	while (len--) {
		if (s[len] == 'T')
			cntAT++;
		else if (s[len] == 'A')
			cntPAT += cntAT;
		else {
			cnt += cntPAT;
			cnt %= 1000000007;
		}
	}
	cout << cnt << endl;
	
	return 0;
}
