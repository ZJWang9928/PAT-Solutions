#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string g, w;
int sg[300], sw[300];

int main() {
        ios::sync_with_stdio(false);
        memset(sg, 0, sizeof(sg));
        memset(sw, 0, sizeof(sw));
        cin >> g;
        cin >> w;
        int i; 
        for (i = 0; i < g.length(); i++) {
                sg[(int)g[i]]++;
        }
        int flag = 1;
        int loss = 0; 
        for (i = 0; i < w.length(); i++) {
                if (sg[w[i]] > 0) {
                        sg[w[i]]--;
                }else{
                        flag = 0;
                        loss++;
                }
        }
        if (!flag) {
                cout << "No " << loss << endl;
        }else{
                int ret = 0;
                for (i = 0; i < 300; i++) {
                        ret += sg[i];
                }
                cout << "Yes " << ret << endl;
        }

        return 0;
}
