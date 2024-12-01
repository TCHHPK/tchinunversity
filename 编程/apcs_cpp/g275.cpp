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
    int n, a[8], b[8], bl;
    cin >> n;
    while (n--)
    {
        bl = 0;
        for (int i = 1; i < 8; i++)
            cin >> a[i];
        for (int i = 1; i < 8; i++)
            cin >> b[i];
        if (a[2] != a[6] || a[2] == a[4] || b[2] != b[6] || b[2] == b[4])
        {
            cout << "A";
            bl = 1;
        }
        if (a[7] == 0 || b[7] == 1)
        {
            cout << "B";
            bl = 1;
        }
        if (a[2] == b[2] || a[4] == b[4] || a[6] == b[6])
        {
            cout << "C";
            bl = 1;
        }
        if (bl == 0)
        {
            cout << "None";
        }
        cout << endl;
    }
    return 0;
}