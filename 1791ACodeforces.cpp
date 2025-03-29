#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		char s;
		cin>>s;
		bool ans = false;
		string co = "codeforces";
		for(int i=0; i<co.length(); i++){
			if(s == co[i]){

				ans=true;
			}

		}
		if(ans == true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}

return 0;
}
