#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
        vector<int>arr(n);
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int ans =0;
		sort(arr.begin(), arr.end());
		for(int i=0; i<n; i++){
			for(int j = n-1; j>=0; j--){
				if(arr[i]+ arr[j] == k){
					ans++;
					arr.erase(find(arr.begin(), arr.end(), i));
					arr.erase(find(arr.begin(),arr.end(), j]));

				}


			}
		}
		cout<<ans<<endl;


	}

return 0;
}
