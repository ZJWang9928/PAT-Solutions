/* 用分奇偶的方式实现两侧交替 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

struct node {
	string name;
	int h;
}people[10002];

bool cmp(node &n1, node &n2) {
	if (n1.h == n2.h)
		return n1.name < n2.name;
	return n1.h > n2.h;
}

int N, K;
string ans[10002];

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> K;
	int i, j;
	for (i = 0; i < N; i++) {
		cin >> people[i].name >> people[i].h;
	}
	sort(people, people+N, cmp);
	int row = K;
	int cnt;
	int posi = 0;
	while (row) {
		if (row == K) {
			cnt = N / K + N % K;
		}else{
			cnt = N / K;
		}
		ans[cnt / 2] =  people[posi].name;
		// left
		j = cnt / 2 - 1;
		for (i = posi + 1; i < posi + cnt; i += 2)
			ans[j--] = people[i].name;
		// right
		j = cnt / 2 + 1;
		for (i = posi + 2; i < posi + cnt; i += 2)
			ans[j++] = people[i].name;
		cout << ans[0];
		for (i = 1; i < cnt; i++) {
			cout << ' ' << ans[i];
		}
		cout << endl;
		posi += cnt;
		row--;
	}
	
	return 0;
}
