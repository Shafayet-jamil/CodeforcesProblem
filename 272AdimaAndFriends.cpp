#include<bits/stdc++.h>
using namespace std;

int main()
{

	    int n;
		cin>>n;
		int arr[n];
		int ans = 0;
		int sum =0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];

		}

		for(int i=1; i<=5; i++){
			if((sum+i)%(n+1) != 1){
				ans+=1;
			}
		}
		cout<<ans<<endl;


return 0;
}
