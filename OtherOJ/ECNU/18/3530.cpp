#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int n;
string arr[25];

bool cmp(string a, string b) {
	return a > b;
}

int main() {
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n, cmp);

	for (i = 0; i < n; i++) {
		cout << arr[i];
	}
	cout << endl;

	return 0;
}
