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
    int a, b, c, bl = 0;
    cin >> a >> b >> c;
    if (a != 0 && b != 0)
    {
        if (c == 1)
        {
            cout << "AND" << endl;
            bl = 1;
        }
    }
    else
    {
        if (c == 0)
        {
            cout << "AND" << endl;
            bl = 1;
        }
    }
    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            cout << "OR" << endl;
            bl = 1;
        }
    }
    else
    {
        if (c == 1)
        {
            cout << "OR" << endl;
            bl = 1;
        }
    }
    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            cout << "XOR" << endl;
            bl = 1;
        }
    }
    else if (a != 0 && b != 0)
    {
        if (c == 0)
        {
            cout << "XOR" << endl;
            bl = 1;
        }
    }
    else
    {
        if (c == 1)
        {
            cout << "XOR" << endl;
            bl = 1;
        }
    }
    if (bl == 0)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}