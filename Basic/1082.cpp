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

struct node {
	string ID;
	int x;
	int y;
	double dis;
} player[10005];

bool cmp(node &n1, node &n2) {
	return n1.dis < n2.dis;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		cin >> player[i].ID >> player[i].x >> player[i].y;
		player[i].dis = player[i].x*player[i].x+player[i].y*player[i].y;
	}
	sort (player, player+n, cmp);
	cout << player[0].ID << ' ' << player[n-1].ID << endl;

	return 0;
}
