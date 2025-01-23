#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long int n;
		cin>>n;
		bool ans = false;
		for(int i=1; i<n/3; ++i){
			for(int j=1; j<n/3; ++j){
				if((j*j*j)+ (i*i*i)== n){
					ans = true;
					break;
				}
			}
		}
		if(ans == true) cout<<"YES"<<endl;
		else{
            cout<<"NO"<<endl;
        }

		}



return 0;
}
