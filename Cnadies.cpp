#include<bits/stdc++.h>
using namespace std;
// int E = 1e9;
int main(){
   long int test;
   cin>>test;
   while(test--){
	long long int n;
	cin>>n;
	long long ans=0;
	for(int i=2; i<30; i++)
	{
	  int value = pow(2, i)-1;//i = 10, 100, 1000, 10000, (1<<i)
		if(n%value == 0){
			ans = n/value;
			break;

		}

// pow(2,i)-1;
	}
	cout<<ans<<endl;
   }

return 0;
}
