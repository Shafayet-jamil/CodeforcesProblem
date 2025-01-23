#include<bits/stdc++.h>
using namespace std;

int main(){
  int test;
  cin>>test;
  while(test--){
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<char, int> mp;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]++;
	}
	int sum=0;

	for(auto i : mp){
		sum+=(i.second+1);
	}
	cout<<sum<<endl;
  }

return 0;
}
