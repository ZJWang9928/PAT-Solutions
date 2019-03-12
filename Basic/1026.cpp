#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

const int CLK_TCK = 100;

int c1, c2;

int main() {
	ios::sync_with_stdio(false);
	cin >> c1 >> c2;
	int toltime = (c2 - c1) / CLK_TCK;
	if ((c2 - c1) % 100 >= 50) {
		toltime++;
	}
	int hh = toltime / 3600;
	toltime %= 3600;
	int mm = toltime / 60;
	toltime %= 60;
	printf("%02d:%02d:%02d\n", hh, mm, toltime);
	
	return 0;
}
