#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{


		 int a, b, c;
		cin>>a>>b>>c;
		int first = max(0, (max(b, c)+1 -a));
		int second = max( 0, (max(a, c)+1 -b));
		int third = max(0, (max(a,b)+1 -c));
		cout<<first<<" "<<second<<" "<<third<<endl;


	}

return 0;
}
