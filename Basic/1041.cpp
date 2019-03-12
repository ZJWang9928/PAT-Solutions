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
struct node {
	string no;
	int test;
	int real;
}stu[1002];

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	int i;
	for (i = 0; i < N; i++) {
		cin >> stu[i].no >> stu[i].test >> stu[i].real;
	}
	int k;
	cin >> k;
	int query;
	int j;
	for (j = 0; j < k; j++) {
		cin >> query;
		for (i = 0; i < N; i++) {
			if (stu[i].test == query) {
				cout << stu[i].no << ' ' << stu[i].real << endl;
				break;
			}
		}
	}
	
	return 0;
}
