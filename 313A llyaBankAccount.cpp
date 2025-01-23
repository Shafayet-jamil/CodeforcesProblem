#include<bits/stdc++.h>
using namespace std;

int solve(int n){
	int f;
	int s;
	f = n%10;
	s = (((n%100)-f)/10);
	if(f > s){
		int ans = ((n/100)*10) + f;
		return ans;
	}
	else{

		return (n/10);
	}

}


int main(){
  int n;
  cin>>n;
  if(n >=0){
	cout<<n;
  }
  else{
	cout<<solve(n);
  }

return 0;
}
