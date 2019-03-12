#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <strstream>
#include <sstream>

using namespace std;

string in, ou;

string lltoString(long long t)
{
    string result;
    strstream ss;
    ss <<  t;
    ss >> result;
    return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> in;
	int i;
	int posi;
	long long sum = 0;
	for (i = 0; i < in.length(); i++) {
		sum += (in[i] - '0');
	}
	ou = lltoString(sum);
	// cout << "here" << ou << endl;
	for (i = 0; i < ou.length(); i++) {
		if (i) cout << ' ';
		switch (ou[i] - '0') {
			case 0:
				cout << "ling"; break;
			case 1:
				cout << "yi"; break;
			case 2:
                                cout << "er"; break;
			case 3:
                                cout << "san"; break;
			case 4:
                                cout << "si"; break;
			case 5:
                                cout << "wu"; break;
			case 6:
                                cout << "liu"; break;
			case 7:
                                cout << "qi"; break;
			case 8:
                                cout << "ba"; break;
			case 9:
                                cout << "jiu"; break;
		}
	}
	cout << endl;
	return 0;
}
