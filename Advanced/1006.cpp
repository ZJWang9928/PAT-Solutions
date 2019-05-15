#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

struct node {
    string IDD;
    int ihh, imm, iss, ohh, omm, oss;
}people[10005];

int N;
char toss;

bool cmp1(const node n1, const node n2) {
    if (n1.ihh == n2.ihh) {
        if (n1.imm == n2.imm) {
            return n1.iss < n2.iss;
        }
        return n1.imm < n2.imm;
    }
    return n1.ihh < n2.ihh;
}

bool cmp2(const node n1, const node n2) {
    if (n1.ohh == n2.ohh) {
        if (n1.omm == n2.omm) {
            return n1.oss > n2.oss;
        }
        return n1.omm > n2.omm;
    }
    return n1.ohh > n2.ohh;
}

int main() {
    ios::sync_with_stdio(false);
    int i;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> people[i].IDD;
        cin >> people[i].ihh;
        cin >> toss;
        cin >> people[i].imm;
        cin >> toss;
        cin >> people[i].iss;
        cin >> people[i].ohh;
        cin >> toss;
        cin >> people[i].omm;
        cin >> toss;
        cin >> people[i].oss;
    }
    sort(people, people+N, cmp1);
    cout << people[0].IDD;
    sort(people, people+N, cmp2);
    cout << ' ' << people[0].IDD << endl;
    system("pause");
    return 0;
}