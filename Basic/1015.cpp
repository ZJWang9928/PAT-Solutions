#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, L, H;
struct node {
	string id;
	int de;
	int cai;
	int sum;
};

bool cmp(node &n1, node &n2) {
	if (n1.sum == n2.sum) {
		if (n1.de == n2.de) {
			return n1.id < n2.id;
		}
		return n1.de > n2.de;
	}
	return n1.sum > n2.sum;
}

node han;
node firstClass[100002];
node secondClass[100002];
node thirdClass[100002];
node fourthClass[100002];

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> L >> H;
	int k;
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
	for (k = 0; k < N; k++) {
		cin >> han.id >> han.de >> han.cai;
		if (han.de < L || han.cai < L)
			continue;
		han.sum = han.de + han.cai;
		if (han.de >= H && han.cai >= H) {
			firstClass[cnt1].id = han.id;
			firstClass[cnt1].de = han.de;
			firstClass[cnt1].cai = han.cai;
			firstClass[cnt1].sum = han.sum;
			cnt1++;
		}else if (han.de >= H && han.cai < H) {
			secondClass[cnt2].id = han.id;
			secondClass[cnt2].de = han.de;
			secondClass[cnt2].cai = han.cai;
			secondClass[cnt2].sum = han.sum;
			cnt2++;
		}else if (han.de < H && han.cai < H && han.de >= han.cai) {
			thirdClass[cnt3].id = han.id;
			thirdClass[cnt3].de = han.de;
			thirdClass[cnt3].cai = han.cai;
			thirdClass[cnt3].sum = han.sum;
			cnt3++;
		}else{
			fourthClass[cnt4].id = han.id;
			fourthClass[cnt4].de = han.de;
			fourthClass[cnt4].cai = han.cai;
			fourthClass[cnt4].sum = han.sum;
			cnt4++;
		}
	}
	sort(firstClass, firstClass+cnt1, cmp);
	sort(secondClass, secondClass+cnt2, cmp);
	sort(thirdClass, thirdClass+cnt3, cmp);
	sort(fourthClass, fourthClass+cnt4, cmp);
	int i;
	cout << cnt1 + cnt2 + cnt3 + cnt4 << endl;
	for (i = 0; i < cnt1; i++) {
		cout << firstClass[i].id << ' ' << firstClass[i].de <<  ' ' << firstClass[i].cai << endl;
	}
	for (i = 0; i < cnt2; i++) {
		cout << secondClass[i].id << ' ' << secondClass[i].de <<  ' ' << secondClass[i].cai << endl;
	}
	for (i = 0; i < cnt3; i++) {
                cout << thirdClass[i].id << ' ' << thirdClass[i].de <<  ' ' << thirdClass[i].cai << endl;
        }
	for (i = 0; i < cnt4; i++) {
                cout << fourthClass[i].id << ' ' << fourthClass[i].de <<  ' ' << fourthClass[i].cai << endl;
        }
	return 0;
}
