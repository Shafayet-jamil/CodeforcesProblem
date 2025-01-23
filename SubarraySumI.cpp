
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int sz, total;
  cin>>sz>>total;
  long long int arr[sz];
  for(int i=0; i<sz; i++){
	cin>>arr[i];
  }
  int left = 0;
  int right = -1;
  long long int sum =0;
  int cnt=0;
  while( right < sz){
//
	while(sum<total && right <sz ){
			right++;
		    sum+=arr[right];

		}
		//
	while( sum>total && left <=right){
		sum-=arr[left];
		left++;
	}
	if(sum == total){
		cnt++;
		sum-=arr[left];
		left++;
	}
	}

  cout<<cnt<<endl;


  return 0;

}
