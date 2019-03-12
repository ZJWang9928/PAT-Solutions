#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <list>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int num, shift;
	int posi;
	list<int> mylist;
	cin >> num >> shift;
	while (num--) {
		cin >> posi;
		mylist.push_back(posi);
	}
	while (shift--) {
		posi = mylist.back();
		mylist.pop_back();
		mylist.push_front(posi);
	}
	list<int>::iterator itr = mylist.begin();
	bool first = true;
	while (itr != mylist.end()) {
		if (first) {
			cout << *itr++;
			first = false;
		}else{
			cout << ' ' << *itr++;
		}
	}
	cout << endl;
	
	return 0;
}
