#include<bits/stdc++.h>
using namespace std;
int isSeven(int n){
   while(n!=0){
	int rem = n%10;
	if(rem == 7) return true;
	else{
		n/=10;
	}
   }
   return false;

}



int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int cnt =0;
		int one =0;
		if(isSeven(n)){
			cout<<0<<endl;
			return 0;
		}
		else{
			while(isSeven(n) != true){
			if(!isSeven(n)){
					++cnt;
					n+=9;
			}
			if(!isSeven(n)){
				++one;
				n+=99;
			}
		}

			int ans = min(cnt, one);
		cout<<ans<<endl;

	   }
		}






return 0;
}
