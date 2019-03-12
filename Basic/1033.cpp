#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string wrong;
string expect;
int check[300] = {0};

int main() {
	ios::sync_with_stdio(false);
	// cin >> wrong;
	// cin >> expect;
	getline(cin, wrong);
	getline(cin, expect);
	int i;
	int j;
	for (i = 0; i < wrong.length(); i++) {
		if (wrong[i] == '+') {
			for (j = 'A'; j <= 'Z'; j++) {
				check[j] = 1;
			}
		}else if(wrong[i] >= 'a' && wrong[i] <='z'){
			check[wrong[i]] = 1;
			check[wrong[i]-32] = 1;
		}else if(wrong[i] >= 'A' && wrong[i] <='Z'){
			check[wrong[i]] = 1;
			check[wrong[i]+32] = 1;
		}else{
			check[wrong[i]] = 1;
		}
	}
	for (i = 0; i < expect.length(); i++) {
		if (!check[expect[i]]) {
			cout << expect[i];
		}
	}
	cout << endl;
	
	return 0;
}
