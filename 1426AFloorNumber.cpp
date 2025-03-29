#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n, x;
		cin>>n>>x;
		int p =2;
		int ans=0;
		int cnt=1;
		if(n <= p){
			cout<<1<<endl;
		}
		else{

		for(int i=2; i<1000; ++i){

		// if(n > p){
		// 	cnt++;
		// int fin = p;
		// fin+=x;
		  // p+=x;
			if( n > p  and n <= (p+=x)){
				ans  = i;

				break;
			}



		  }
		  	cout<<ans<<endl;
		}





	}

return 0;
}
