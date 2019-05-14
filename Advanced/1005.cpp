#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

// 用int接收输入时有两条WA，换成long long后最后一条通不过
// 应该还是数字长度的问题
// 因此换成用string接受输入，成功AC

long long tol = 0;
string n;
string numbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string ret[105];

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	for (i = 0; i < n.length(); i++) {
		tol += (n[i] - '0');
	}
	cout << tol << endl;
	int isFirst = 1;
	int cnt = 0;
	if (!tol) {
		ret[cnt++] = numbers[0];
	}
	while (tol) {
		ret[cnt++] = numbers[tol%10];
		tol /= 10;
	}
	while(cnt) {
		if (!isFirst)
			cout << ' ';
		cout << ret[cnt-1];
		cnt--;
		isFirst = 0;
	}
	cout << endl;
	
	return 0;
}
