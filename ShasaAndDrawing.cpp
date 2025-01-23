#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   while(n--){
	int a, k;
	cin>>a>>k;
	int mx = 4*a - 2;

	if(mx > k){
		if(k%2==0){
			cout<<k/2<<endl;

		}
		else{
			cout<<(k+1)/2<<endl;
		}
	}
	else{
		cout<<(k/2)+1<<endl;
	}

   }

return 0;
}
