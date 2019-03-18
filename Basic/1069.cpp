#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>

using namespace std;

map<string, int> vis;
int m, n, s;
string names[1002];

int main() {
	ios::sync_with_stdio(false);
	int i;
	cin >> m >> n >> s;
	int flag = 0; 	// 是否开始
	for (i = 1; i <= m; i++) {
		cin >> names[i];
		if (i == s) {
			flag = 1;
			cout << names[i] << endl;
			vis[names[i]]++;
		}
		if ((i - s) % n == 0 && i > s) {
			// cout << names[i] << endl;
			if (!vis[names[i]]) {
				cout << names[i] << endl;
				vis[names[i]]++;
				// cout << vis[names[i]] << endl;
			}else{
				// cout << "no" << endl;
				s++;
			}
		}
	}
	if (!flag)
		cout << "Keep going..." << endl;
	
	return 0;
}
