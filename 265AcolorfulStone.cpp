#include<bits/stdc++.h>
using namespace std;

int main(){
  string one, two;
  cin>>one>>two;
  int k=0;
   int cnt=01;
  for(int i=0; i<two.size(); i++){
	if(two[i] == one[k]){
		cnt++;
		k++;
	}

  }
  cout<<cnt<<endl;

return 0;
}
