#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, b;
int num[100000005];

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> b;
	int cnt = 0;
	while (N > 0) {
		num[cnt++] = N % b;
		N /= b;
	}
	int i, j;
	int flag = 1;
	i = 0, j = cnt-1;
	while (i != j) {
		if (num[i] != num[j]) {
			flag = 0;
			break;
		}
		i++;
		j--;
	}
	if (flag) {
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	cout << num[cnt-1];
	for (i = cnt-2; i >= 0; i--) {
		cout << ' ' << num[i]; 
	}
	cout << endl;
	
	return 0;
}
