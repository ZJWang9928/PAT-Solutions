#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

double W, T, L;
double maxW, maxT, maxL, curMax, res;
int curIdx;
char ret[3] = {'W', 'T', 'L'};

int main() {
    ios::sync_with_stdio(false);
    res = 1;
    while (cin >> W >> T >> L) {
        curMax = 0;
        curIdx = 0;
        if (curMax < W) {
            curMax = W;
            curIdx = 0;
        }
        if (curMax < T) {
            curMax = T;
            curIdx = 1;
        }
        if (curMax < L) {
            curMax = L;
            curIdx = 2;
        }
        res *= curMax;
        // cout << "curMax = " << curMax << endl;
        cout << ret[curIdx] << ' ';
    }
    res = (res * 0.65 - 1) * 2;
    cout << fixed << setprecision(2) << res << endl;

    system("pause");
    return 0;
}