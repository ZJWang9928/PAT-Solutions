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

map<int, int> vis;
int m, n, tol;
int retx, rety, retcolor, retflag = 0;
int dir[8][2] = {1,0, -1,0, 0,1, 0,-1, 1,1, 1,-1, -1,1, -1,-1};
int pic[1002][1002];

bool check(int x, int y) {
	for (int i = 0; i < 8; i++) {
		int xx = x + dir[i][0];
		int yy = y + dir[i][1];
		if (xx>=0 && xx<n && yy<m && yy>=0 && abs(pic[xx][yy]-pic[x][y])<=tol)
			return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> m >> n >> tol;
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> pic[i][j];
			vis[pic[i][j]]++;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (vis[pic[i][j]] == 1 && check(i, j)) {
				retflag++;
				retx = i;
				rety = j;
			}
		}
	}

	if (retflag == 1) {
		printf("(%d, %d): %d\n", rety+1, retx+1, pic[retx][rety]);
	}else if(retflag > 1) {
		cout << "Not Unique" << endl;
	}else{
		cout << "Not Exist" << endl;
	}
	
	return 0;
}
