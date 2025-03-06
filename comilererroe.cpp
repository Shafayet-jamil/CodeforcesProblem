

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
		for(int i=0; i<n-2; i++)
		{
			cin>>arr[i];
		}

		for(int i=0; i<n; i++){
			cout<<arr[i];
		}


	}

return 0;
}
