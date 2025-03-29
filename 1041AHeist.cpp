#include<bits/stdc++.h>
using namespace std;

int main()
{

		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
		int mx = arr[n-1];
		int mn = arr[0];

		int ans =((mx-mn )+1 )- n;
		cout<<ans<<endl;

return 0;
}
