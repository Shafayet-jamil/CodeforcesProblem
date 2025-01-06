#include<bits/stdc++.h>
using namespace std;

int main(){

  int test;
  cin>>test;
  while (test--)
  {
  	int n;
  	cin>>n;
  	int mono[n];
  	int stro[n];
  	int sum=0;
  	for(int i=0;i<n; i++){
		cin>>mono[i];
	//	sum+=mono[i];
  	}
  	for(int i=0;i<n; i++){
		cin>>stro[i];
  	}
  	int ans=0;
  	 for(int i=0;i<n-1;i++){
            if(mono[i]>stro[i+1]){
                sum+=mono[i];
                ans+=stro[i+1];
            }
        }

        sum=sum+mono[n-1];

        cout<<sum-ans<<endl;


  }
return 0;
}
