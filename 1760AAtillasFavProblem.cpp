
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		sort(s.begin(), s.end());
		int ans = (int)s[n-1];
		cout<<ans-96<<endl;

	}

return 0;
}
