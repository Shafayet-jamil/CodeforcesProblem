#include<bits/stdc++.h>
using namespace std;

int main(){
   int test;
   cin>>test;
   while(test--){
	int n, a, b, c;
	cin>>n>>a>>b>>c;

	int sum = a+b+c;
	int cycle = n/sum;
	int day = cycle*3;

	int rem = n%sum;
	if(rem>0){
		day++;
		rem-=a;
	}
	if(rem>0){
		day++;
		rem-=b;
	}
	if (rem>0){
		day++;
		rem-=c;
	}

	cout<<day<<endl;
   }

return 0;
}
