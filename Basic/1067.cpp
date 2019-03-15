#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string correct, pswd;
int tt;

int main() {
	ios::sync_with_stdio(false);
	cin >> correct >> tt;
	// cin.clear();
	getline(cin, pswd);
	getline(cin, pswd);
	while(true){
		if (pswd == "#")
			break;
		if (correct == pswd) {
			cout << "Welcome in" << endl;
			return 0;
		}else{
			cout << "Wrong password: " << pswd << endl;
			tt--;
		}
		if (!tt) {
			cout << "Account locked" << endl;
			break;
		}
		getline(cin, pswd);
	}

	return 0;
}
