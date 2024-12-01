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
    int cnt, f, n, y, y1 = 10;
    cnt = 1;
    cin >> f;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        cout << f << " ";
        if ((f == 5 && y == 0) || (f == 0 && y == 2) || (f == 2 && y == 5))
        {
            cout << ": Won at round " << cnt << endl;
            return 0;
        }
        else if ((y == 5 && f == 0) || (y == 0 && f == 2) || (y == 2 && f == 5))
        {
            cout << ": Lost at round " << cnt << endl;
            return 0;
        }
        if (cnt != 1 && y1 == y)
        {
            if (y == 5)
            {
                f = 2;
            }
            else if (y == 2)
            {
                f = 0;
            }
            else if (y == 0)
            {
                f = 5;
            }
        }
        else
        {
            f = y;
        }
        y1 = y;
        cnt++;
    }
    cout << ": Drew at round " << cnt - 1 << endl;
    return 0;
}