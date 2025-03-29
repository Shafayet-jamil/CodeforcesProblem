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
		//long long int one = log(n)+1;
		bool result = false;
		long long int fin = 0;
		for(long long int y =1; y<n; y++){
			long long ans = n^y;
			if(y>1000000) break;
			if((ans+y >n) and (ans+n)>y and (n+y)>ans){
				result = true;
				fin = y;
				break;
			}
		}
		if(result == true){
			cout<<fin<<endl;
		}
		else{
			cout<<-1<<endl;
		}

	}

return 0;
}
