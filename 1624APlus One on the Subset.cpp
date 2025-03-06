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
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
		int mn = arr[0];
		int mx = arr[n-1];
		cout<<mx-mn<<endl;

	}

return 0;
}
