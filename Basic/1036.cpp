#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N;
char piv;

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> piv;
	int i;
	for (i = 0; i < N; i++) {
		cout << piv;
	}
	cout << endl;
	int row;
	if (N & 1) {
		row = (N + 1) / 2;
	}else{
		row = N / 2;
	}
	row -= 2;
	int col = N - 2;
	int j;
	for (i = 0; i < row; i++) {
		cout << piv;
		for (j = 0; j < col; j++) {
			cout << ' ';
		}
		cout << piv << endl;
	}
	for (i = 0; i < N; i++) {
                cout << piv;
        }
        cout << endl;
	
	return 0;
}
