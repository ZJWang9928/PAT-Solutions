#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string s1, s2, s3, s4;

int main() {
	ios::sync_with_stdio(false);
	cin >> s1 >> s2 >> s3 >> s4;
	int i;
	int flag = 0;
	int len1 = (s1.length() < s2.length()) ? s1.length() : s2.length();
	for (i = 0; i < len1; i++) {
		// if (!flag)
		// 	if (s1[i] > 'G' || s1[i] < 'A')
		// 		continue;
		if (s1[i] == s2[i] && !flag && s1[i] >= 'A' && s1[i] <= 'G') {
 			flag = 1;
			switch(s1[i]-'A'){
				case 0:
					cout << "MON ";
					break;
				case 1:
					cout << "TUE ";
					break;
				case 2:
					cout << "WED ";
					break;
				case 3:
					cout << "THU ";
					break;
				case 4:
					cout << "FRI ";
					break;
				case 5:
					cout << "SAT ";
					break;
				case 6:
					cout << "SUN ";
					break;
			}
			continue;
		}
		if (s1[i] == s2[i] && flag) {
			if (s1[i]>='A'&&s1[i]<='N') {
				cout << s1[i] -'A'+10 << ":";
				break;
			}
			else if (s1[i]>='0'&&s1[i]<='9') {
				cout << '0' << s1[i] << ":";
				break;
			}
			// break;
		}
	}
	int len2 = (s3.length() < s4.length()) ? s3.length() : s4.length();
	for (i = 0; i < len2; i++) {
		// cout << 61 << endl;
		if (isalpha(s3[i])) {
			if (s3[i] == s4[i]) {
				// cout << "here" << endl;
				if (i<10) {
					cout << "0" << i;
				}else{
					cout << i;
				}
				break;
			}
			// break;
		}
	}
	// cout << endl;

	return 0;
}