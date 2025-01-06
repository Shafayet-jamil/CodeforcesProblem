
#include<bits/stdc++.h>
using namespace std;

int main(){
  string ans = "Timur";
  string dem = ans;
  string one = "Timru";

int test; cin>>test;
while(test--){
	bool res = false;
	int stlen;
	cin>>stlen;
	string s;
	cin>>s;
   //if(dem == s){
	//res = true;
   //}

	vector<string>v;
	while(next_permutation(ans.begin(), ans.end())){
		v.push_back(ans);

	}
    for(auto i : v){
		if(s == i ){
			res = true;
		}


    }
    if(res==true) cout<<"Yes"<<endl;
    else if(dem == s || one == s) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


	/*

	do{
		//for(int i=0; i<ans.length(); i++){
		for(auto i: ans){
			v.push_back(i);
		}
	}
	while(next_permutation(ans.begin(), ans.end()));

	for(int i=0; i<v.size(); i++){
		if(v[i] == ans){
			res = true;
		}

	}

		*/

}



return 0;
}
