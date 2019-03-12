#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

long long A, B;
int D;
vector<int> res;

int main() {
	ios::sync_with_stdio(false);
	cin >> A >> B >> D;
	long long ret = A + B;
	if (!ret) {
		cout << "0" << endl;
		return 0;
	}
	while (ret) {
		res.push_back(ret % D);
		ret /= D;
	}
	vector<int>::iterator itr = res.end()-1;
	while (true) {
		cout << *itr;
		if (itr == res.begin()) {
			cout << endl;
			break;
		}
		itr--;
	}
	
	return 0;
}
