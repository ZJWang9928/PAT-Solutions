#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
 return a>b;
}///递减排序
void to_array(int n,int num[]){///将n的每一位存到num数组
  for(int i=0;i<4;i++){
    num[i]=n%10;
    n/=10;
  }
}
int to_number(int num[]){///将num数组转换为数字
   int sum=0;
   for(int i=0;i<4;i++)
   {
       sum=sum*10+num[i];
   }
   return sum;
}
int main()
{
    int n,minm,maxm;
    scanf("%d",&n);
    int num[5];
    while(1){
        to_array(n,num);
        sort(num,num+4);
        minm=to_number(num);
        sort(num,num+4,cmp);
        maxm=to_number(num);
        n=maxm-minm;
        printf("%04d - %04d = %04d\n",maxm,minm,n);
        if(n==0||n==6174) break;
    }
    return 0;
}

// #include <algorithm>
// #include <cmath>
// #include <cstdio>
// #include <cstring>
// #include <iostream>
// #include <queue>
// #include <string>
// #include <vector>

// using namespace std;

// char num[5];

// int main() {
	// ios::sync_with_stdio(false);
	// memset(num, 0, sizeof(num));
	// cin >> num;
	// // int res = 0;
	// int i;
	// int left, right, sum = 0;
	// int vis[12], cnt = 0;
	// memset(vis, 0, sizeof(vis));
	// for (i = 0; i < 4; i++) {
		// vis[num[i]-'0']++;
	// }
	// int pivot;
	// for (i = 1; i < 10; i++) {
		// if (vis[i]) {
			// cnt++;
			// pivot = i;
		// }
	// }
	// cout << "cnt = " << cnt << endl << "pivot=" << pivot << endl;
	// if (cnt == 1) {
		// int al;
		// for (i = 0; i < vis[pivot]; i++) {
			// al = al*10 + pivot;
		// }
		// printf("%04d - %04d = 0000\n", al, al);
		// return 0;
	// }
	// while (true) {
		// sort(num, num+4);
		// left = 0, right = 0;
		// for (i = 3; i >= 0; i--) {
			// left = left * 10 + (num[i] - '0');
		// }
		// for (i = 0; i < 4; i++) {
			// right = right * 10 + (num[i] - '0');
		// }
		// sum = left - right;
		// printf("%04d - %04d = %04d\n", left, right, sum);
		// if (sum == 6174)
			// return 0;
		// for (i = 3; i >= 0; i--) {
			// num[i] =  (sum % 10) + '0';
			// sum /= 10;
		// }
		// // int x;
		// // cin >> x;
	// }
	
	// return 0;
// }
