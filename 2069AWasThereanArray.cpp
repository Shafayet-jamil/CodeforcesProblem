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

		for(int i=0; i<n-2; ++i)
		{
			cin>>arr[i];
		}
		bool ans = false;
		for(int i=1; i<n-3; ++i){
			if(arr[i] == 0 and arr[i+1] ==1 and arr[i-1]==1){
				//if(arr[i-1]==1 and arr[i+1] ==1){
					ans = true;
					//break;
				//}
			}
		}

	   if(ans == false) cout<<"YES"<<endl;
	   else{
		cout<<"NO"<<endl;
	   }
	}

return 0;
}
