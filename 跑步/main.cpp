// 360test.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <map>
#include <string>
#include <stack>
#include <cctype>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <cassert>
#include <numeric>
#include <sstream>
using namespace std;
#define Online_Judge
#define outstars cout << "***********************" << endl;
#define clr(a,b) memset(a,b,sizeof(a))
#define lson l , mid  , rt << 1
#define rson mid + 1 , r , rt << 1 | 1
#define mk make_pair

const int MAXN = 1000 + 50;
const int MAXS = 10000 + 50;
const int sigma_size = 26;
const long long LLMAX = 0x7fffffffffffffffLL;
const long long LLMIN = 0x8000000000000000LL;
const int INF = 0x7fffffff;
const int IMIN = 0x80000000;
const int inf = 1 << 30;
#define eps 1e-10
const long long MOD = 1000000000 + 7;
const int mod = 10007;
typedef long long LL;
const double PI = acos(-1.0);
typedef double D;
typedef pair<int, int> pii;
typedef vector<int> vec;
typedef vector<vec> mat;
typedef vector<string> vs;


using namespace std;

int main()
{
	int R, L;

	cin >> L >> R;
	double x, y;
	double perimeter = PI * 2 * R;
	int chushu= L / perimeter;
	double geradus;
	double remainder = (double)L - perimeter* chushu;
	geradus = remainder / R;
	y = sin(geradus)*R;
	x = cos(geradus)*R;
	printf("%.3f %.3f\n", x, y*(-1));

	printf("%.3f %.3f\n", x, y);
	system("pause");
    return 0;
	
}
