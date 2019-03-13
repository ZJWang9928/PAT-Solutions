/* 有点坑的一道题，A比B长的时候不能直接不管多出来的部分，
 * 也要和前导零进行操作，否则3和5过不了*/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string a, b;
string c = "";
char single[14] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};

int main() {
	ios::sync_with_stdio(false);
	cin >> a >> b;
	int i;
	int posi, pa, pb;
	char va, vb;
	// reverse(a.begin(), a.end());
	// reverse(b.begin(), b.end());
	for (i = 1; i <= max(a.length(), b.length()); i++) {
		pb = b.length() - i;
		pa = a.length() - i;
		if (pb < 0) {
			vb = '0';
		}else{
			vb = b[pb];
		}
		if (pa < 0) {
			va = '0';
		}else{
			va = a[pa];
		}
		if (i & 1) { // 对于奇数位
			posi = (va-'0')+(vb-'0');
			posi %= 13;
			c += single[posi];
		}else{ // 对于偶数位
			posi = (vb-'0')-(va-'0');
			if (posi < 0)
				posi += 10;
			c += (posi + '0');
		}
	}
	int flag = 1;
	reverse(c.begin(), c.end());
	for (i = 0; i < c.length(); i++) {
		if (flag && i == c.length()-1) {
			cout << c[i];
			break;
		}
		if (flag && c[i] == '0')
			continue;
		if (c[i] != '0')
			flag = 0;
		cout << c[i];
	}
	cout << endl;

	return 0;
}
