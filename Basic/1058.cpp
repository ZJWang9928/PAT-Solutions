#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, M;

struct node {
	int point;
	int choice;
	int cntRight;
	string answer;
}exs[102];
string ans;
int wrong[102] = {0};
int score[1002] = {0};

int main() {
	ios::sync_with_stdio(false);
	int i, j, k;
	cin >> N >> M;
	for (i = 0; i < M; i++) {
		cin >> exs[i].point >> exs[i].choice >> exs[i].cntRight;
		getline(cin, exs[i].answer);
		// cout << exs[i].point << ' ' << exs[i].choice << ' ' << exs[i].cntRight << ' ' << exs[i].answer << endl;
	}
	for (k = 0; k < N; k++) {
		getline(cin, ans);
		int cntPro = 0;
		// cout << ans << endl;
		for (i = 0; i < ans.length(); i++) {
			if (ans[i] == '(') {
				cntPro++;
				// cout << i << endl;
				if((ans[i+1] - '0') != exs[cntPro-1].cntRight) {
					wrong[cntPro]++;
					continue;
				}
				for (j = i + 2; ans[j] != ')'; j++);
				// cout << j << endl;
				// cout << ans.substr(i+2, j-i-2) << endl;
				if (exs[cntPro-1].answer != ans.substr(i+2, j-i-2)) {
					wrong[cntPro]++;
				}else{
					score[k] += exs[cntPro-1].point;
					// cout << score[k] << endl;
				}
			}
		}
	}
	for (i = 0; i < N; i++) {
		cout << score[i] << endl;
	}
	int tmax = 0;
	for (i = 1; i <= M; i++) {
		if (tmax < wrong[i]) {
			tmax = wrong[i];
		}
	}
	if (tmax) {
		cout << tmax;
		for (i = 1; i <= M; i++) {
			if (wrong[i] == tmax) {
				cout << ' ' << i;
			}
		}
		cout << endl;
	}else{
		cout << "Too simple" << endl;
	}

	return 0;
}
