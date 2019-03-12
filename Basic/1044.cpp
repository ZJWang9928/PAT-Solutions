#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string lower[14] = {"tret" ,"jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string higher[14] = {"null" ,"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int N;

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	cin.ignore();
	int i;
	string num;
	int number, posi;
	for (i = 0; i < N; i++) {
		num = " ";
		getline(cin, num);
		// cout << "num=" << num << endl;
		if (num[0]>='0' && num[0]<='9') {
			number = 0;
			posi = 0;
			while(posi < num.length()) {
				number = number*10 + (num[posi]-'0');
				posi++;
			}
			if (number >= 13) {
				cout << higher[number/13];
			}
			if (number >= 13 && number%13) {
				cout << ' ' << lower[number%13];
			}
			if (number < 13) {
				cout << lower[number%13];
			}
			cout << endl;
			
		}else{
			int j, ret = 0;
			for (j = 1; j <= 12; j++) {
				if (num[0]==higher[j][0]&&num[1]==higher[j][1]&&num[2]==higher[j][2]) {
					ret += j*13;
					// cout << "1-" << higher[j] << endl;
				}
				if (num[0]==lower[j][0]&&num[1]==lower[j][1]&&num[2]==lower[j][2]) {
					ret += j;
					// cout << "2-" << lower[j] << endl;
				}
				if (num.length()>3&&num[4]==lower[j][0]&&num[5]==lower[j][1]&&num[6]==lower[j][2]) {
					ret += j;
					// cout << "3-" << lower[j] << endl;
				}
			}
			cout << ret << endl;
		}
	}
	
	return 0;
}
