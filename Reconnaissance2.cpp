#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
	cin>>arr[i];
  }
  int index1;
  int index2;
  int diff = abs(arr[0]- arr[n-1]);
  index1 = 1;
  index2 = n;

  for(int i=0; i<n-1; i++){
	if(abs(arr[i] - arr[i+1]) < diff){
		diff = abs(arr[i] - arr[i+1]);
		index1 = i+1;
		index2 = i+2;

	}
  }
  cout<<index1<<" "<<index2;


return 0;
}
/*
for(int j =i+1; i<=n; j++){
		int mn = min((arr[i] - arr[j]), one);
		onein = i;
		two = j;
	}
	*/
