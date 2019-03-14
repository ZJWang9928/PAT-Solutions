#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int a, b, ret;
char s[15], ss[15];

int main() {
	// ios::sync_with_stdio(false);
	scanf("%d %d", &a, &b);
	ret = a + b;
	if (ret < 0) {
		printf("-");
		ret = -ret;
	}
	// sscanf(s, "%d", ret);
	sprintf(s, "%d", ret);
	// cout << s << endl;
	reverse(s, s+strlen(s));
	// cout << s << endl;
	int i;
	int cnt = 0;
	int posi = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (cnt % 3 == 0 && cnt != 0) {
			ss[posi++] = ',';
		}
		ss[posi++] = s[i];
		// cout << ss << endl;
		cnt++;
	}
	reverse(ss, ss+strlen(ss));
	printf("%s\n", ss);

	return 0;
}
