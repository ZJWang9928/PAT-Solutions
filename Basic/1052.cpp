#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

vector<vector<string>> vec;

int main() {
	ios::sync_with_stdio(false);
	int i;
	for (i = 0; i < 3; i++) {
		string s;
		getline(cin, s);
		vector<string> row;
		int j = 0, k = 0;
		while (j < s.length()) {
			if (s[j] == '[') {
				while (k++ < s.length()) {
					if (s[k] == ']') {
						row.push_back(s.substr(j + 1, k - j - 1));
						break;
					}
				}
			}
			j++;
		}
		vec.push_back(row);
	}
	int n;
	cin >> n;
    	for(i = 0; i < n; i++) {
        	int a, b, c, d, e;
	        cin >> a >> b >> c >> d >> e;
       		 if(a > vec[0].size() || b > vec[1].size()
			|| c > vec[2].size() || d > vec[1].size()
			|| e > vec[0].size() || a < 1 || b < 1
			|| c < 1 || d < 1 || e < 1) {
			 cout << "Are you kidding me? @\\/@" << endl;
			 continue;
		 }
		 cout << vec[0][a-1] << "(" << vec[1][b-1] << vec[2][c-1] << vec[1][d-1] << ")" << vec[0][e-1] << endl;
	}
	
	return 0;
}
