#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int p1, p2, p3, a1, a2, a3, o1, o2, o3;

int main() {
	ios::sync_with_stdio(false);
	scanf("%d.%d.%d %d.%d.%d", &a1, &a2, &a3, &p1, &p2, &p3);
	int tola, tolp;
	tola = a1*29*17 + a2*29 + a3;
	tolp = p1*29*17 + p2*29 + p3;
	// cout << tola << ' ' << tolp << endl;
	long long ret = tolp - tola;
	// cout << ret << endl;
	if (ret < 0) {
		ret = -ret;
		cout << '-' << ret/17/29 << '.' << ret%(29*17)/29 << '.' << ret%29 << endl;
	}else{
		cout << ret/17/29 << '.' << ret%(29*17)/29 << '.'     << ret%29 << endl;
	}
	// if (p3 > a3) {
		// o3 = p3 - a3;
	// }else{
		// p2--;
		// o3 = p3 + 29 - a3;
	// }
	// if (p2 > a2) {
		// o2 = p2 - a2;
	// }else{
		// p1--;
		// o2 = p2 + 17 - a2;
	// }
	// o1 = p1 - a1;
	// if (o1 < 0) {
		// o1++;
		// o2 = 16 - o2;
		// o3 = 29 - o3;
	// }
	// printf("%d.%d.%d\n", o1, o2, o3);
	
	return 0;
}
