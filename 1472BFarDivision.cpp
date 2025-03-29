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
		int one =0, two=0;
		int sum=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
			if(arr[i] == 1) one++;
			else two++;
		}

		//2 1 1 1 1
		//2 1 1
		 if(n%2==0 && sum%2==0){
			cout<<"YES"<<endl;
		 }
		 else if(n%2!=0 && sum%2==0 && sum%n !=0){
			cout<<"YES"<<endl;
		 }
		else cout<<"NO"<<endl;

	}

return 0;
}
