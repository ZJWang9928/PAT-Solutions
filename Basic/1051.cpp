/*由于实部、虚部都保留两位小数，
 * 所以当A、B的值介于0与-0.01之间时,
 * 必须要把它们设置为零，
 * 否则会有用例无法通过
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

double r1, r2, p1, p2, a1, a2, b1, b2, reta, retb;

int main() {
	ios::sync_with_stdio(false);
	cin >> r1 >> p1 >> r2 >> p2;
	a1 = r1 * cos(p1);
	a2 = r2 * cos(p2);
	b1 = r1 * sin(p1);
	b2 = r2 * sin(p2);
	reta = a1 * a2 - b1 * b2;
	retb = a1 * b2 + a2 * b1;
	if (fabs(reta) < 0.01)
	  reta = 0;
	if (fabs(retb) < 0.01)
	  retb = 0;
	if (reta < 0){
		printf("-%.2lf", -reta);
	}else{
		printf("%.2lf", reta);
	}
	if (retb < 0){
                printf("-%.2lfi\n", -retb);
        }else{
                printf("+%.2lfi\n", retb);
        }
	
	return 0;
}
