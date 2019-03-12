#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, p;
long long num[100002];

int main() {
	ios::sync_with_stdio(false);
	int i;
	cin >> N >> p;
	for (i = 0; i < N; i++) {
		cin >> num[i];
	}
	sort(num, num+N);
	int j;
	i = 0;
	j = 0;
	int ret = -1;
	while(i < N && j < N) {
		while (j < N && num[j] <= (long long)num[i]*p)
			j++;
		ret = max(ret, j - i);
		i++;
	}
       /*  for (i = 0; i < N; i++) { */
		// if (num[i]*p >= num[N-1])
			// break;
	// }
	// int ret = N - i;
	// for (i = N-1; i >= 0; i--) {
		// if (num[0]*p >= num[i])
                        // break;
	// }
	/* ret = (ret > (i+1)) ? ret : (i+1); */
	cout << ret << endl;
	
	return 0;
}
