#include<bits/stdc++.h>
using namespace std;

const int mx = 2e5;

int main()
{
	int test;
	cin>>test;

	vector<int>even, odd;
	for(int i=1; i<=mx; i+=2){
		odd.push_back(i);
	}
	for(int i=2; i<=mx; i+=2){
		even.push_back(i);
	}

	while(test--)
	{

		int n;
		cin>>n;
		if(n%4!=0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		    for(int i=0; i<n/2; i++){
				cout<<even[i]<<" ";
		    }
		    for(int i=0; i<n/2-1; i++){

				cout<<odd[i]<<" ";
		    }
		    cout<<3*n/2 -1<<endl;
		}

	}

return 0;
}
