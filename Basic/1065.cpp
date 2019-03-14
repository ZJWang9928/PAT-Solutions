#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

int n, m;
int dou[100005], single[100005], ret[100005] = {0}, gus[100005] = {0};

int main() {
	ios::sync_with_stdio(false);
	memset(dou, -1, sizeof(dou));
	memset(single, -1, sizeof(dou));
	cin >> n;
	int i;
	int left, right;
	for (i = 0; i < n; i++) {
		cin >> left >> right;
		dou[left] = right;
		dou[right] = left;
	}
	cin >> m;
	set<int> s;
	for (i = 0; i < m; i++) {
		cin >> gus[i];
		if (dou[gus[i]] != -1) {
			ret[dou[gus[i]]] = 1;
		}
	}
	for (i = 0; i < m; i++) {
		if (!ret[gus[i]])
			s.insert(gus[i]);
	}
	// cout << s.size() << endl;
	printf("%d\n", s.size());
	for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
		if (it != s.begin())
			printf(" ");
		printf("%05d", *it);
	}
	// printf("\n");
	
	return 0;
}
