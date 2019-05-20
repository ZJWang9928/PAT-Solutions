#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string k;
int digits[10] = {0};
int ret[25];

int main() {
    ios::sync_with_stdio(false);
    cin >> k;
    int i;
	int up = 0;
	string doubled;
	for (i = 0; i < k.size(); i++) {
		digits[k[i]-'0']++;
	}
    int flag = 1;
	int posi;
	for (i = k.size()-1; i >= 0; i--) {
		posi = ((k[i]-'0') << 1) + up;
		if (posi >= 10) {
			up = 1;
			posi %= 10;
		}else{
			up = 0;
		}
		ret[i] = posi;
		//cout << ret[i] << endl;
		digits[posi]--;
		if (digits[posi] < 0) {
			flag = 0;
			//break;
		}
	}
	if (flag) {
		for (i = 0; i < 10; i++) {
				if (digits[i] != 0) {
						flag = 0;
						break;
				}
		}
	}
    if (flag) {
            cout << "Yes" << endl;
    }else{
            cout << "No" << endl;
    }
	if (up) {
		cout << 1;
	}
	for (i = 0; i < k.size(); i++) {
		cout << ret[i];
	}
	cout << endl;
	return 0;
}
