#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s;
  map<string, int>mp;
  for(int i=0; i<n; i++){
	cin>>s;
	mp[s]++;
  }
   int res = 0;
   string ans;

  for(auto i : mp){
	 res = max(i.second, res);
  }
  for(auto i : mp){
	if(res == i.second){
		ans = i.first;
	}
  }

  cout<<ans;

return 0;
}
