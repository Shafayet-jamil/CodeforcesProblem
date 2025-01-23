//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s == "YES" || s == "YEs" || s == "YeS" || s== "yES" || s== "yes" || s == "yEs" || s == "Yes" || s== "yeS") cout<<"YES"<<endl;

		else cout<<"NO"<<endl;
	}

	return 0;
}
