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
int vis[300] = {0};

int main() {
	ios::sync_with_stdio(false);
	// cin >> A;
	// cin >> B;
	getline(cin, A);
	getline(cin, B);
	int i;
	for (i = 0; i < A.length(); i++) {
		if (!vis[A[i]]) {
			cout << A[i];
			vis[A[i]] = 1;
		}
	}
	for (i = 0; i < B.length(); i++) {
		if (!vis[B[i]]) {
			cout << B[i];
			vis[B[i]] = 1;
		}
	}
	cout << endl;
	
	return 0;
}
