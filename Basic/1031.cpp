#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N;
string IDD;
int weight[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int num[20];

bool check(string IDD) {
	int i;
	for (i = 0; i < IDD.length() - 1; i++) {
		if (IDD[i]<'0'||IDD[i]>'9')
			return false;
		num[i] = IDD[i]-'0';
	}
	int Z = 0;
	for (i = 0; i < 17; i++) {
		Z += num[i] * weight[i];
	}
	Z %= 11;
	switch (Z) {
		case 0:
			if (IDD[17]=='1')
				return true;
			else
				return false;
			break;
		case 1:
			if (IDD[17]=='0')
				return true;
			else
				return false;
			break;
		case 2:
                        if (IDD[17]=='X')
                                return true;
                        else
                                return false;
                        break;
		case 3:
                        if (IDD[17]=='9')
                                return true;
                        else
                                return false;
                        break;
		case 4:
                        if (IDD[17]=='8')
                                return true;
                        else
                                return false;
                        break;
		case 5:
                        if (IDD[17]=='7')
                                return true;
                        else
                                return false;
                        break;
		case 6:
                        if (IDD[17]=='6')
                                return true;
                        else
                                return false;
                        break;
		case 7:
                        if (IDD[17]=='5')
                                return true;
                        else
                                return false;
                        break;
		case 8:
                        if (IDD[17]=='4')
                                return true;
                        else
                                return false;
                        break;
		case 9:
                        if (IDD[17]=='3')
                                return true;
                        else
                                return false;
                        break;
		case 10:
                        if (IDD[17]=='2')
                                return true;
                        else
                                return false;
                        break;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	int i; 
	int flag = 0;
	for (i = 0; i < N; i++) {
		cin >> IDD;
		if(!check(IDD)) {
			cout << IDD << endl;
			flag = 1;
		}
	}
	if (!flag) {
		cout << "All passed" << endl;
	}

	return 0;
}
