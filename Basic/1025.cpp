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
	int add;
	int data;
	int next;
};

int main() {
	ios::sync_with_stdio(false);
	int start, N, K;
	cin >> start >> N >> K;
	int i;
	node rawlist[100002];
	node *sortedlist[100002];
	int address;
	for (i = 0; i < N; i++) {
		cin >> address;
		rawlist[address].add = address;
		cin >> rawlist[address].data >> rawlist[address].next;
	}
	int j = 0;
	for (i = start; i != -1; i = rawlist[i].next) {
		sortedlist[j++] = &rawlist[i];
	}
	for (i = 0; i <= j - K; i += K) {
		reverse(sortedlist+i, sortedlist+i+K);
	}
	for (i = 0; i < j; i++) {
		if (i != j - 1) {
			printf("%05d %d %05d\n", sortedlist[i]->add, sortedlist[i]->data, sortedlist[i+1]->add);
		}else{				printf("%05d %d -1\n", sortedlist[i]->add, sortedlist[i]->data);
		}
	}
	
	return 0;
}
