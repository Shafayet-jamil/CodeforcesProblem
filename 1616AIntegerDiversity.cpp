#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		map<int, int>mp;
		int n;
		cin>>n;
		int arr[n];

		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i] <0) arr[i] = -arr[i];
			mp[arr[i]]++;
		}
		int ans =0;
		for(auto i : mp){
			if(i.first ==0){
					ans+=1;

				}
			else if(i.second >=2 ){
				ans+=2;
			}
			else {
				ans+=1;
			}
		}

			cout<<ans<<endl;




	}

return 0;
}
