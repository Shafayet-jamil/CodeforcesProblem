#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	for(int i=0; i<test; i++){
		int n;
		cin>>n;
		string s;
		cin>>s;

		for(int i=0; i<n-2; i++){
			if(s[i] =='1' && s[i+1] == '0'){
				s.erase(i);
				i = i-2;
			}
			//else if(s[i] =='1' && s[i+1] == '0' && s[i+2] == '0'){
			//	s.erase(i+1);
			//}
		}
		cout<<s<<endl;

	}

return 0;
}
