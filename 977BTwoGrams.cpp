#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	string s;
	cin>>s;
	map<string, int>mp;
	for(int i=0; i<test-1; i++){
			string p;
	  p+=s[i];
	  p+=s[i+1];
	  mp[p]++;

	}
	int mx = 0;

	for(auto i: mp){
		mx = max(i.second, mx);
	}
	for(auto i : mp){
		if(i.second == mx){
			cout<<i.first<<endl;
			break;
		}
	}


return 0;
}
