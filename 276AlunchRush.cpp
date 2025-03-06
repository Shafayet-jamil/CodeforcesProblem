#include<bits/stdc++.h>
using namespace std;
//#define INT_MIN = –2147483648;

int main()
{
	int n, k;
	cin>>n>>k;
	int ans = INT_MIN;
	while(n--){
		int fi, ti;
		cin>>fi>>ti;

		if(k>=ti){
			ans = max(fi, ans);
		}
		else if(k <ti){
			int res = fi-ti+k;
			ans = max(ans, res);
		}


	}
	cout<<ans;

return 0;
}
