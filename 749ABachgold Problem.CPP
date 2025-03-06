#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%2==0){
		int ans = n/2;
		cout<<ans<<endl;
		for(int i=0; i<ans; i++){
			cout<<2<<" ";

		}

	}
	else{
		int res = n/2;
		 cout<<res<<endl;
		for(int i=0; i<res-1; i++){
			cout<<2<<" ";
		}
		cout<<3<<endl;
	}

return 0;
}
