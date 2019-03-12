#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string s1, s2;
int vis[1000];

int main() {
	ios::sync_with_stdio(false);
	memset(vis, 0, sizeof(vis));
	cin >> s1;
	cin >> s2;
	int i, j;
	i = 0;
	j = 0;
	while (i < s1.length()) {
		if (s1[i] != s2[j]) {
			if (!vis[s1[i]]) {
				if (s1[i] >= 'a' && s1[i] <= 'z') {
					// cout << s1[i] << endl;
                        	        cout << (char)(s1[i] - 'a' + 'A');
        	                }else
                	                cout << s1[i];
	                        vis[s1[i]] = 1;
				if (s1[i] >= 'a' && s1[i] <= 'z') {
					vis[s1[i] - 'a' + 'A'] = 1;
				}
				if (s1[i] >= 'A' && s1[i] <= 'Z') {
					vis[s1[i] + 'a' - 'A'] = 1;
				}
			}
			i++;
			continue;
		}
		j++;
		i++;
	}
	cout << endl;
	
	return 0;
}
