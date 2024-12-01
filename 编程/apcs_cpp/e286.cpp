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
int v1a = 0, v1b = 0, v2a = 0, v2b = 0;
int num;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int j = 0; j < 4; j++)
    {
        cin >> num;
        v1a += num;
    }
    for (int j = 0; j < 4; j++)
    {
        cin >> num;
        v1b += num;
    }
    for (int j = 0; j < 4; j++)
    {
        cin >> num;
        v2a += num;
    }
    for (int j = 0; j < 4; j++)
    {
        cin >> num;
        v2b += num;
    }
    cout << v1a << ":" << v1b << endl;
    cout << v2a << ":" << v2b << endl;
    if (v1a > v1b && v2a > v2b)
    {
        cout << "Win" << endl;
        return 0;
    }
    else if (v1b > v1a && v2b > v2a)
    {
        cout << "Lose" << endl;
        return 0;
    }
    else
    {
        cout << "Tie" << endl;
        return 0;
    }
    return 0;
}