#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define N 100005
#define oo 0x3f3f3f3f
#define ool 0x3f3f3f3f3f3f3f3f
#define P (998244353)
#define F first
#define S second
#define pii pair<int, int>
#define lowbit(x) (x & -x)
#define max(a, b) (a < b ? b : a)
#define min(a, b) (a > b ? b : a)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a1, b1, c1, a2, b2, c2, n, ans = -oo, y1, y2, x1, x2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        x1 = i;
        x2 = n - i;
        y1 = a1 * x1 * x1 + b1 * x1 + c1;
        y2 = a2 * x2 * x2 + b2 * x2 + c2;
        if (y1 + y2 > ans)
            ans = y1 + y2;
    }
    cout << ans << endl;
    return 0;
}