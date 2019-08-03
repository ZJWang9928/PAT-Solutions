#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

const int MAXN=1e9+5;

using namespace std;

int n;
bool arr[MAXN] = {false};

void pre() {
	int i, cnt = 0;
	for (i = 1; i < MAXN; i += cnt) {
		arr[i] = true;
		cnt++;
	}
	//for (i = 1; i*(i-1)/2+1 < MAXN; i++) {
		//arr[i*(i-1)/2+1] = 1;
	//}
}

int main() {
	pre();
	//cin >> n;
	scanf("%d", &n);
	int ai;
	while (n--) {
		scanf("%d", &ai);
		printf("%d\n", arr[ai]);
		//cin >> ai;
		//cout << arr[ai] << endl;
	}

	return 0;
}
