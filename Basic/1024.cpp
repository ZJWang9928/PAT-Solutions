#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int sign;
int lleft;
queue<int> RR;
int take;
int posi;

int main() {
	ios::sync_with_stdio(false);
	char piv;
	int i;
	int cnt = 0;
	cin >> piv;
	sign = (piv == '+') ? 1 : 0;
	cin >> lleft;
	cin >> piv;
	while (cin >> piv && piv != 'E') {
		RR.push(piv - '0');
		cnt++;
	}
	cin >> piv;
	take = (piv == '+') ? 1 : 0;
	cin >> posi;

	if (!sign) {
		cout << '-';
	}
	if (take || !posi) {
		cout << lleft;
		while (posi != 0 && !RR.empty()) {
			cout << RR.front();
			RR.pop();
			posi--;
		}
		if (posi != 0) {
			while (posi--) {
				cout << 0;
			}
		}
		if (!RR.empty()) {
			cout << '.';
			while (!RR.empty()) {
				cout << RR.front();
				RR.pop();
			}
		}
	}else{
		cout << 0 << '.';
		posi--;
		while (posi--) {
			cout << 0;
		}
		cout << lleft;
		while (!RR.empty()) {
			cout << RR.front();
			RR.pop();
		}
	}
	cout << endl;

	return 0;
}
