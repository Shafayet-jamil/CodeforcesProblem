#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a, b, n;
		cin>>a>>b>>n;

		int mx = max(a, b);
		int mn = min(a,b);
       // int sum =a+b;
        //if(sum > n) cout<<1<<endl;

		int cnt=0;
		while(max(a, b) <=n){
				cnt++;
			if(a >b) b+=a;
			else a+=b;
		}


	   cout<<cnt<<endl;
	}

return 0;
}
