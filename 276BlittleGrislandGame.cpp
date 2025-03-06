#include<bits/stdc++.h>
using namespace std;

bool ispalindrom(string k){

   string p = k;
   reverse(k.begin(), k.end());
   if(p == k){
		return true;
   }
   return false;
}



int main()
{
	string s;
	cin>>s;
	int n = s.length();
	if(ispalindrom(s)){
		cout<<"First"<<endl;
	}
	else if(n%2==0){
		cout<<"Second"<<endl;
	}
	else{
		cout<<"First"<<endl;
	}

return 0;
}
