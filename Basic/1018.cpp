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

char jia, yi;
int n;
int jiawin, yiwin, draft;
map<char, int> jiawinwin, yiwinwin;

int judge(char jia, char yi) {
	if (jia == yi) {
		return 0;
	}else if ((jia=='C' && yi=='J') || (jia=='J' && yi=='B') || (jia=='B' && yi=='C')) {
		return 1;
	}else{
		return 2;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	jiawin = 0;
	yiwin = 0;
	draft = 0;
	jiawinwin['C'] = jiawinwin['B'] = jiawinwin['J'] = 0;
	yiwinwin['C'] = yiwinwin['B'] = yiwinwin['J'] = 0;
	for (i = 0; i < n; i++) {
		cin >> jia >> yi;
		if (judge(jia, yi) == 0) {
			draft++;
			// jiawinwin[jia]++;
			// yiwinwin[yi]++;
		}else if (judge(jia, yi) == 1) {
			jiawin++;
			jiawinwin[jia]++;
                        // yiwinwin[yi]++;
		}else{
			yiwin++;
			// jiawinwin[jia]++;
                        yiwinwin[yi]++;
		}
	}
	cout << jiawin << ' ' << draft << ' ' << yiwin << endl;
	cout << yiwin << ' ' << draft << ' ' << jiawin << endl;
	char jiajia, yiyi;
//	int jiamax = 0, yimax = 0;
	jiajia = (jiawinwin['B'] >= jiawinwin['C']) ? 'B' : 'C';
	jiajia = (jiawinwin[jiajia] >= jiawinwin['J']) ? jiajia : 'J';
	yiyi = (yiwinwin['B'] >= yiwinwin['C']) ? 'B' : 'C';
	yiyi = (yiwinwin[yiyi] >= yiwinwin['J']) ? yiyi :  'J';
	cout << jiajia << ' ' << yiyi << endl;
	
	return 0;
}
