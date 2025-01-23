#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin>>n>>t;
	vector<int>v(n), one;

	for(int i=1; i<n; i++){
		cin>>v[i];
	}

	int pos =1;
	while(1){
		pos +=v[pos];
		if(pos == t) {
				cout<<"YES"<<endl;
				break;
		}
		//
	    if(pos > t) {
				cout<<"NO"<<endl;
		break;
		}
	}



return 0;
}


/*
	int sum=v[0];
	one.push_back(v[0]);
	for(int i=1; i<v.size()-1; i++){
		sum+=v[i];
		one.push_back(sum);
	}
	bool ans = false;
	for(auto i:one){
	    if(i == t){
			ans =true;
			break;
	    }
		//cout<<i<<" ";
	}
	if(ans == true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

*/
