#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string s;
		cin>>s;
		if(s== "abc" || s== "acb" ||s== "bac" || s== "cba"){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}

	}

return 0;
}
