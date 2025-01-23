#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, m, a, b;
   cin>>n>>m>>a>>b;
   int ans =0;

   if(m*a<=b){
	ans = n*a;
	cout<<ans;
   }
   else{
	int res = min((n%m) * a, b);

	int one = (n/m)*b;
	int three = res+one;
	cout<<three;
   }


return 0;
}
