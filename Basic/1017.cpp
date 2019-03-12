#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string str;
int n;

int main() {
	ios::sync_with_stdio(false);
	cin >> str >> n;
	int len = str.length();
	int i;
	for (int k = 0; k < str.length(); k++) {
		if (str[k] != '0') {
			i = k;
			break;
		}
	}
	if (len - 1 == i  && str[i]-'0' < n) {
		cout << "0" << " " << (str[i] - '0') << endl;
		return 0;
	}
	int R = str[i] - '0';
	if (R < n) {
		R = R*10 + (str[++i] - '0');
	}
	cout << R / n;
	R %= n;
	while (++i < len) {
		R = R * 10 + (str[i]-'0');
		cout << R / n;
		R %= n;
	}
	cout << " " << R << endl;

	return 0;
}
