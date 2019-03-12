#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string A, B;
int da, db;

int main() {
	ios::sync_with_stdio(false);
	cin >> A >> da >> B >> db;
	int i;
	long long pa = 0, pb = 0;
	for (i = 0; i < A.length(); i++) {
		if ((A[i] - '0') == da) {
			pa = pa*10 + da;
		}
	}
	for (i = 0; i < B.length(); i++) {
		if ((B[i] - '0') == db) {
			pb = pb*10 + db;
		}
	}
	cout << pa + pb << endl;
	
	return 0;
}
