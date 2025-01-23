#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
  string s;
  cin>>s;
  int nm = s.length();
  int one =0;
  int two= 0;
  string arr[2] = {"01", "10"};
  for(int i=0; i<nm; i++){
	if((s[i] == '0' && s[i+1]=='1') || s[i]=='1' and s[i+1] == '0'){
		s.erase(i, 2);
		if(i-2<-1 ) i=-1;
		else i= i-2;
	}

  }
  cout<<s.size();
//s.erase(remove(s.begin(), s.end(), arr[i]), s.end());
return 0;
}

/*

*/
