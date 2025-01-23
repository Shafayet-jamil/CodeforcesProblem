
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int s, n;
	cin>>s>>n;
	vector<pair<int, int>>v;
	for(int i=0; i<n; i++){
		 int x, m;
		 cin>>x>>m;
		 v.push_back({x, m});
	}
	sort(v.begin(), v.end());

	for(auto i : v){
		if(s>i.first){
			s+=i.second;
		}
		else if(s <= i.first){
			s = -1;
			break;
		}
	}
	if(s >0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

return 0;
}
