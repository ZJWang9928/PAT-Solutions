#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n;
string s;
vector<string> res;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> s;
		size_t p = s.find_first_not_of("A");
		if (p == string::npos || s[p] != 'P') {
			// res.push_back("NO");
			cout << "NO" << endl;
			continue;
		}
		size_t t = s.find_first_not_of("A", p+1);
		if (t == string::npos || t == p+1 || s[t] != 'T') {
			// res.push_back("NO");
			cout << "NO" << endl;
			continue;
		}
		size_t e = s.find_first_not_of("A", t+1);
		if (e != string::npos) {
			// res.push_back("NO");
			cout << "NO" << endl;
			continue;
		}
		if (s.length()-1-t == p * (t - p - 1)) {
			// res.push_back("YES");
			cout << "YES" << endl;
			// continue;
		}else{
			// res.push_back("NO");
			cout << "NO" << endl;
		}
	}
	// for (int i = 0; i < n; i++) {
		// cout << res[i] << endl;
	// }
	
	return 0;
}
