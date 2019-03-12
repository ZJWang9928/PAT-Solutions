#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

struct node {
	string name;
	int year;
	int month;
	int day;
}person[100002];

bool check(int year, int month, int day) {
	if (year > 2014)
		return false;
	else if (year == 2014) {
		if (month > 9)
			return false;
		else if (month == 9) {
			if (day > 6) {
				return false;
			}
		}
	}

	if (year < 1814)
		return false;
	else if (year > 1814)
		return true;
	else if (year == 1814) {
		if (month < 9)
			return false;
		else if (month > 9)
			return true;
		else if (month == 9) {
			if (day >= 6)
				return true;
			else
				return false;
		}
	}
}

bool compare(node &n1, node &n2) {
	if (n1.year == n2.year) {
		if (n1.month == n2.month) {
			return n1.day < n2.day;
		}else{
			return n1.month < n2.month;
		}
	}else{
		return n1.year < n2.year; 		// 1:n1>n2
	}
}

int N;

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	int i;
	int ret = 0;
	node oldest, youngest;
	oldest.name = "old";
	oldest.year = 2014;
	oldest.month = 9;
	oldest.day = 6;
	youngest.name = "young";
	youngest.year = 1000;
	youngest.month = 1;
	youngest.day = 1;
	bool ok = false;
	for (i = 0; i < N; i++) {
		ok = false;
		cin >> person[i].name;
		// scanf("%d//%d//%d", &person[i].year, &person[i].month, &person[i].day);
		string date;
		cin >> date;
		// for (int k = 0; i < date.length(); k++) {
			// date[k] -= '0';
		// }
		person[i].year = (date[0]-'0')*1000+(date[1]-'0')*100+(date[2]-'0')*10+(date[3]-'0');
		person[i].month = (date[5]-'0')*10+(date[6]-'0');
		person[i].day = (date[8]-'0')*10+(date[9]-'0');
		// cout << person[i].year <<  person[i].month << person[i].day << endl;
		if (check(person[i].year, person[i].month, person[i].day)) {
			ret++;
			ok = true;
			// cout << i << "is ok" << endl;
		}
		if (ok && !compare(oldest, person[i])) {
			oldest = person[i];
		}
		if (ok && !compare(person[i], youngest)) {
			youngest = person[i];
		}
	}
	if (!ret) {
		cout << 0 << endl;
		return 0;
	}
	cout << ret << ' ' << oldest.name << ' ' << youngest.name << endl;
	
	return 0;
}
