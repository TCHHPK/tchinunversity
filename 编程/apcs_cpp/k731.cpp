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
    int n, x1, x2, y1, y2, face1, face2, r = 0, l = 0, t = 0;
    cin >> n;
    cin >> x1 >> y1;
    face1 = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> x2 >> y2;
        if (x2 - x1 == 0 && y2 - y1 > 0)
        {
            face2 = 4;
        }
        else if (x2 - x1 == 0 && y2 - y1 < 0)
        {
            face2 = 2;
        }
        else if (x2 - x1 > 0 && y2 - y1 == 0)
        {
            face2 = 1;
        }
        else if (x2 - x1 < 0 && y2 - y1 == 0)
        {
            face2 = 3;
        }
        if (face2 - face1 == 1 || face2 - face1 == -3)
        {
            r++;
        }
        else if (face2 - face1 == 2 || face2 - face1 == -2)
        {
            t++;
        }
        else if (face2 - face1 == 3 || face2 - face1 == -1)
        {
            l++;
        }
        face1 = face2;
        x1 = x2;
        y1 = y2;
    }
    cout << l << " " << r << " " << t << endl;
    return 0;
}