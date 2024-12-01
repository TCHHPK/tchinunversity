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
#define HPK  ios::sync_with_stdio(0);cin.tie(0);
int main()
{
	int n,arr[10],num,cnt,brr[10]={0};
	cin>>n;
	for(int i=0;i<7;i++){
		cin>>arr[i];
	}
	sort(arr,arr+7);
	while(n--){
		cnt=0;
		for(int i=0;i<7;i++){
			cin>>num;
			for(int i=0;i<7;i++){
				if(arr[i]==num){
					cnt++;
					break;
				}
			}
		}
		brr[cnt]++;
	}
	for(int i=7;i>0;i--){
		cout<<brr[i]<<" ";
	}
	cout<<endl;
    return 0;
}