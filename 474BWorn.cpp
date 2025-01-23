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
	    vector<int>pre(n);
		pre[0] = arr[0];
		for(int i=1; i<=n; i++){
			pre[i] = pre[i-1]+arr[i];
		}

		int m;
		cin>>m;
		int brr[m];
		for(int i=0; i<m; i++){
			cin>>brr[i];
		}

		for(int i=0; i<m; i++){
			int lo = lower_bound(pre.begin(), pre.end(), brr[i])-pre.begin()+1;
			cout<<lo<<endl;;
		}



return 0;
}
