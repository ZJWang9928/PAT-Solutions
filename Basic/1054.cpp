#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main() {
	// ios::sync_with_stdio(false);
	int T;
	cin >> T;
	char a[50], b[50];
	double tmp, sum = 0;
	int cnt = 0;

	while (T--) {
		int j;
		scanf("%s", a);
		sscanf(a, "%lf", &tmp); // 把a转换为lf存进tmp
		sprintf(b, "%.2lf", tmp);
		int flag = 0;
		for (j = 0; j < strlen(a); j++) {
			if (a[j] != b[j])
				flag = 1;
		}
		if (flag || tmp < -1000 || tmp > 1000)
			printf("ERROR: %s is not a legal number\n",a);
		else {
			cnt++;
			sum += tmp;
		}
	}

	if (cnt == 1) {
		printf("The average of 1 number is %.2lf\n",sum);
	}else if (cnt > 1) {
		printf("The average of %d numbers is %.2lf\n", cnt, (double)sum/cnt);
	}else{
		printf("The average of 0 numbers is Undefined\n");
	}

	return 0;
}

/* int n;
string num;
double sum;
int cntLeft, cntRight, cnt;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i, j, k;
	int minus = 0, flag, isLeft;
	cntLeft = 0;
	cntRight = 0;
	cnt = 0;
	sum = 0;
	int left, right;
	for (k = 0; k < n; k++) {
		cin >> num;
		minus = 0;
		flag = 1;
		isLeft = 1;
		left = right = 0;
		if (num[0] == '-') {
			minus = 1;
		}
		for (i = 0; i < n; i++) {
			if (!isdigit(num[i]) && num[0] != '-' && num[i] != '.') {
				flag = 0;
				break;
			}else if(num[0] == '.'){
				flag = 0;
				break;
			}else if(isLeft){
				if (num[i] == '.') {
					isLeft = 0;
					continue;
				}
				left = left * 10 + (num[i] - '0');
				if (left >1000) {
					flag = 0;
					break;
				}
			}else if(!isLeft) {
				cntRight++;
				if (num[i] == '.') {
					flag = 0;
					break;
				}
				if (cntRight > 2) {
					flag = 0;
					break;
				}
				right = right * 10 + (num[i] - '0');
			}
		}
		if (!flag) {
			printf("ERROR: %s is not a legal number\n", num.c_str());
		}else{
			cnt++;
			while (cntRight) {
				right /= 10;
				cntRight--;
			}
			sum += left + right;
		}
	}
	if (!cnt) {
		printf("The average of 0 numbers is Undefined\n");
	}else if(cnt == 1){
		printf("The average of 1 number is %.2lf\n", sum);
	}else{
		printf("The average of %d numbers is %.2f\n", cnt, sum/cnt);
	}
	
	
	return 0;
} */
