#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n;
int a1[102], a2[102], b[102];

void InSort() {
	int flag = 0;
	int i;
	for (i = 2; i <= n; i++) {
		sort(a1, a1 + i);
		if (flag) {
			cout << "Insertion Sort" << endl;
			cout << a1[0];
			for (int j = 1; j < n; j++) {
				cout << ' ' << a1[j];
			}
			cout << endl;
			return;
		}
		if (equal(a1, a1+n, b))
			flag = 1;
	}
}

void MeSort() {
	int flag = 0;
	int i, j;
	for (i = 2; ; i *= 2) {
		for (j = 0; j < n; j += i) {
			sort (a2+j, a2 + (j + i < n ? j + i : n));
		}
		if (flag) {
			cout << "Merge Sort" << endl;
			cout << a2[0];
			for (j = 1; j < n; j++) {
				cout << ' ' << a2[j];
			}
			cout << endl;
			return;
		}
		if (equal(a2, a2 + n, b))
			flag = 1;
		if (i > n)
			break;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		cin >> a1[i];
		a2[i] = a1[i];
	}
	for (i = 0; i < n; i++) {
		cin >> b[i];
	}
	InSort();
	MeSort();
	
	return 0;
}

// #include <iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[102], b[102];
//     //原始序列
//     for (int i = 0;i < n;i++) {
//         cin >> a[i];
//     }
//     //中间序列
//     for (int i = 0;i < n;i++) {
//         cin >> b[i];
//     }
//     //判断是否是插入排序的中间序列
//     bool flag = true;
//     int position;
//     for(int i=0;i<n;i++) {
//         if (b[i] > b[i + 1]) {
//             position = i + 1;
//             break;
//         }
//     }
//     for (int j = position;j < n;j++) {
//         if (a[j] != b[j]) {
//             flag = false;
//         }
//     }
//     if (flag) {
//         cout << "Insertion Sort"<<endl;
//         /*for (int i = position;i >= 0;i--) {
//             if (b[i] < b[i - 1]) {
//                 int m = b[i];
//                 b[i] = b[i - 1];
//                 b[i - 1] = m;
//             }
//         }*/
//         sort(b,b+position+1, less<int>());
//         int temp=0;
//         for (int j = 0;j < n;j++) {
//             if (temp != 0) {
//                 cout << ' ';
//             }
//             cout << b[j];
//             temp++;
//         }
//     }
//     else {
//         cout << "Merge Sort"<<endl;
//         //判断两个相邻非递减序列的长度，cnt1和cnt2
//         int cnt1 = 1, cnt2 = 1,cnt , m = 0;
//         for (int i = 1;i < n;i++) {
//             if (m < 1) {
//                 if (b[i] >= b[i - 1]) {
//                     cnt1++;
//                 }
//                 else {
//                     m++;
//                 }
//             }
//             else {
//                 if (b[i] >= b[i - 1]) {
//                     cnt2++;
//                 }
//                 else {
//                     break;
//                 }
//             }
//         }
//         cnt1 <= cnt2 ? cnt = cnt1 : cnt = cnt2;//取较小值
//         if (2 * cnt >= n) {
//             sort(b, b + n, less<int>());
//         }
//         else {
//             int k = 1;
//             for (int i = 2 * k* cnt;i <= n;i = 2 * k*cnt) {
//                 sort(b + 2 * (k - 1)*cnt, b + i);
//                 k++;
//             }
//             sort(b + 2 * (k - 1)*cnt, b+n);//还需对尾部进行排序，有特殊情况
//         }
//         int temp = 0;
//         for (int j = 0;j < n;j++) {
//             if (temp != 0) {
//                 cout << ' ';
//             }
//             cout << b[j];
//             temp++;
//         }
//     }
//     return 0;
// }
