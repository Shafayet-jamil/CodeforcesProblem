#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n, s;
		cin>>n>>s;
		int midium = n/2 +1;
		int ans = s/midium; //pura array k ,, m dia fillup kore felbo and late mod thakbe which is lower than divition.
		cout<<ans<<endl;

	}

return 0;
}
