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
	int times;
	int n;
	int a[500];
	int dp[500][500];
	int sum[501];
	cin >> times;
	for (int kase = 0; kase < times; kase++) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		memset(sum, 0, sizeof(sum));
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= n ; i++) {
			sum[i] = sum[i - 1] + a[i-1];
		}
		for (int r = 0; r < n ; r++) {
			for (int l = 1;l <= n - r; l++) {
				dp[l][l + r] = sum[l + r] - sum[l - 1] - min(dp[l + 1][l + r], dp[l][l + r - 1]);
			}
		}
		printf("Case #%d: %d %d\n", kase + 1, dp[1][n], sum[n ] - dp[1][n]);
	}
    return 0;
	
}