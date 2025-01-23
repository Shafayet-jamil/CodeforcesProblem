#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int arr[n];
		int res= 0;
		for(int i=1; i<=n; i++)
		{
			cin>>arr[i];

			res = __gcd(res, abs(arr[i]-i));
		}


		cout<<res<<endl;

	}

return 0;
}
