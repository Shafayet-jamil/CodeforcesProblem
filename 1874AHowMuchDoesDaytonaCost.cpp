#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n, k;
		cin>>n>>k;
		int arr[n];
		bool ans = false;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(k == arr[i]){
				ans = true;
			}
		}
		if(ans == true){
			cout<<"yes"<<endl;
		}
		else cout<<"no"<<endl;


	}

return 0;
}
