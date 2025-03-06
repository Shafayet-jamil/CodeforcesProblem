
#include<bits/stdc++.h>
using namespace std;



int main()
{
	int test;
	cin>>test;
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		s[i] =  tolower(s[i]);
	}
	//string s = tolower(j);
	map<char, int>mp;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]++;

	}
	if(mp.size()== 26){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

return 0;
}

/*cout<<mp.size()<<endl;
	for(auto i : mp){
		cout<<i.first<<" "<<i.second<<endl;
	}

*/
