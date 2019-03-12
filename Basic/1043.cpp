#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string raw;
int cnt[300] = {0};

int main() {
	ios::sync_with_stdio(false);
	cin >> raw;
	int i;
	for (i = 0; i < raw.length(); i++) {
		cnt[raw[i]]++;
	}
	int cntP = cnt['P'];
	int cntA = cnt['A'];
	int cntT = cnt['T'];
	int cnte = cnt['e'];
	int cnts = cnt['s'];
	int cntt = cnt['t'];
	while (!(!cntP && !cntA && !cntT && !cnte && !cnts && !cntt)) {
		if (cntP) {
			cout << "P";
			cntP--;
		}
		if (cntA) {
			cout << "A";
			cntA--;
		}
		if (cntT) {
			cout << "T";
			cntT--;
		}
		if (cnte) {
			cout << "e";
			cnte--;
		}
		if (cnts) {
			cout << "s";
			cnts--;
		}
		if (cntt) {
			cout << "t";
			cntt--;
		}
	}
	cout << endl;
	
	return 0;
}
