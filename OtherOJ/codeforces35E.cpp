#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

const int N = 100002;
int n;
struct node {
	int h;
	int x;
	int d;
	node (int h1=0, int x1=0, int d1=0) : x(x1), h(h1), d(d1){}
	bool operator<(node n1) const {
		return x < n1.x;
	}
}points[N << 1];
multiset<int> ms;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	int h, l, r;
	for (i = 0; i < n; i++) {
		cin >> h >> l >> r;
		points[i << 1] = node(h, l, 1);
		points[i << 1 | 1] = node(h, r, -1);
	}
	
	sort(points, points+(n<<1));
	ms.insert(0);
	int mh = 0, ch;
	vector<pair<int, int>> ans;
	for (i = 0; i < (n<<1); i++) {
		if (points[i].d == 1) {
			ms.insert(points[i].h);
		}else{
			ms.erase(ms.lower_bound(points[i].h));
		}
		ch = *(ms.rbegin());
		if (ch != mh) {
			ans.push_back(make_pair(points[i].x, mh));
			ans.push_back(make_pair(points[i].x, ch));
		}
		mh = ch;
	}
	cout << ans.size() << endl;
	for (i = 0; i < ans.size(); i++) {
		cout << ans[i].first << ' ' << ans[i].second << endl; 
	}
	
	return 0;
}
