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
    int n, a, b, c, d, ans;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> a >> b >> c >> d;
            ans = 8 * a + 4 * b + 2 * c + d;
            if (ans == 5)
                cout << "A";
            else if (ans == 7)
                cout << "B";
            else if (ans == 2)
                cout << "C";
            else if (ans == 13)
                cout << "D";
            else if (ans == 8)
                cout << "E";
            else if (ans == 12)
                cout << "F";
        }
        cout << endl;
    }
    return 0;
}