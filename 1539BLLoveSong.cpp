#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,test;
	cin>>n>>test;
	string s;
	cin>>s;
   int sum[n+1];
   sum[0] = 0;
   for(int i=1; i<=s.length(); i++){
	 sum[i] = sum[i-1] + s[i-1]-96;
   }
		int l, r;

		for(int i=0; i<test; i++)
		{
			cin>>l>>r;
			cout<<sum[r]-sum[l-1]<<endl;
		}


return 0;
}
