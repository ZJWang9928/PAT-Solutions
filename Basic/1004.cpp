#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n;
string MaxName, MinName, MaxNo, MinNo, TmpName, TmpNo;
int MaxG = -1, MinG = 120, TmpG;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> TmpName >> TmpNo >> TmpG;
		if (TmpG > MaxG) {
			MaxG = TmpG;
			MaxName = TmpName;
			MaxNo = TmpNo;
		}
		if (TmpG < MinG) {
                        MinG = TmpG;
                        MinName = TmpName;
                        MinNo = TmpNo;
                }
	}
	cout << MaxName << ' ' << MaxNo << endl;
	cout << MinName << ' ' << MinNo << endl;	
	return 0;
}
