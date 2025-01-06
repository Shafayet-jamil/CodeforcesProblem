#include<bits/stdc++.h>
using namespace std;

int main(){
  int test;
  cin>>test;
  while(test--){
	int n;
	cin>>n;
	string s, s2;
	cin>>s>>s2;

	for(int i=0; i<n; i++){
			//if(s[i] == s2[i]){
			//	i++;
			//}
		if(s[i] == 'G' && s2[i] == 'B'){
			s2[i] = 'G';
		}
	    if(s[i] == 'B' && s2[i] == 'G'){
			s2[i] = 'B';
	    }
	    //i++;
	}

	if(s == s2) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;



  }

return 0;
}
