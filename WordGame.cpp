#include<bits/stdc++.h>
using namespace std;

int main(){
   int test;
   cin>>test;

   while(test--){
	int n;
	cin>>n;
	map<string, int>mp;
	string st[3][n];
	for(int i=0; i<3; i++){
		for(int j=0; j<n; j++){
			cin>>st[i][j];
			mp[st[i][j]]++;
		}

	}
 int ans;
		for(int i=0; i<3; i++){
				ans = 0;
				for(int j=0; j<n; j++){
					if(mp[st[i][j]] == 1){
						ans+=3;
					}
					else if(mp[st[i][j]] == 2){
						ans+=1;
					}
				}

				cout<<ans<<" ";
			}

			cout<<endl;


   }

return 0;
}
