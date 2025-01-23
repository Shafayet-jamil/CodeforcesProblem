#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a, b, d, e;
		cin>>a>>b>>d>>e;

		 int c, one, two;
		 c = d - b;
		 one = a+b;
		 two = e - d;
		 if(c==one && c == two){
			cout<<3<<endl;
		 }
		 else if(c ==one || c == two || one == two){
			cout<<2<<endl;
		 }
		 else{
			cout<<1<<endl;
		 }
	}


return 0;
}
