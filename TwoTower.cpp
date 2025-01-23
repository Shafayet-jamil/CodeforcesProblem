#include<bits/stdc++.h>
using namespace std;

int main(){
  int test;
  cin>>test;
  while(test--){
	int n, m;
	cin>>n>>m;
	string one, two;
	cin>>one>>two;
	reverse(two.begin(), two.end());

	one = one+two;
	bool ans= false;
	int cnt =0;
	for(int i=0; i<one.length(); i++){
		cnt += (one[i-1] == one[i]);
	}

		if(cnt<=1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

  }

return 0;
}
