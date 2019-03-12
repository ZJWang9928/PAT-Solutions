#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

char a[105][105], c;
int length, i;

int main() {
	ios::sync_with_stdio(false);
	length = 80;
	i = 0;
	while ((c = getchar()) != '\n') {
		if (c == ' ') {
			a[length][i] = '\0';
			length--;
			i = 0;
			continue;
		}else{
			a[length][i] = c;
			i++;
		}
	}
	a[length][i] = '\0';
	for (i = length; i < 81; i++) {
		if (i == 80) {
			printf("%s", a[80]);
			break;
		}else{
			printf("%s ", a[i]);
		}
	}
	printf("\n");

	return 0;
}
