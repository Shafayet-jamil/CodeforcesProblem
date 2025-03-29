#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	string fin = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

	while(test--)
	{
		string s;
		cin>>s;
		bool ans = fin.find(s) != string::npos;
		// != string::npos;
		if(ans){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}

return 0;
}
