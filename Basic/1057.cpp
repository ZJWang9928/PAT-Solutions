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
	getline(cin, s);
	int i;
	int N = 0;
	for (i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			N += (s[i] - 'A' + 1);
		}
		if (s[i] >= 'a' && s[i] <= 'z') {
                        N += (s[i] - 'a' + 1);
                }
	}
	// cout << N << endl;
	int cnt0 = 0, cnt1 = 0;
	while (N) {
		if (N % 2) {
			cnt1++;
		}else{
			cnt0++;
		}
		N /= 2;
	}
	cout << cnt0 << ' ' << cnt1 << endl;
	
	return 0;
}
