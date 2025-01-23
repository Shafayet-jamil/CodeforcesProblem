#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long long ans= a*d;
		long long res= b*c;
		if(ans == res) cout<<0<<endl;
		else if((ans!=0&& res%ans==0) ) cout<<1<<endl;
		else cout<<2<<endl;

	}
 // || (res!=0 && ans%res==0)
return 0;
}
