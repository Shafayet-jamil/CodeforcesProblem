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
		vector<int>arr(n);
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(), arr.end());
		int ans = unique(arr.begin(), arr.end())-arr.begin();
		cout<<ans<<endl;


	}

return 0;
}
