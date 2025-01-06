#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
string p;
cin>>s>>p;

for(int i=0; i<s.size(); i++){
	if(s[i] == p[i]){
		s[i] = '0';
	}
	else {
		s[i] = '1';
	}
}

cout<<s<<endl;
return 0;
}
