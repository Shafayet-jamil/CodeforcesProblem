#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string s;
		cin>>s;int sum=0, sum2=0;
		for(int i=0; i<s.length()/2; i++){
			sum+=s[i]-'0';
		}
		for(int i=s.length()/2; i<s.length(); i++){
			sum2+=s[i]-'0';
		}
		if(sum2 == sum) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}

return 0;
}
