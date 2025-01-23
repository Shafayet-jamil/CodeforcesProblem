#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
	cin>>arr[i];
   }

   int count=0;

   for(int i=0; i<n; i++){
	if(arr[i] == 1 ){
		count++;
	}
   }
   /*
   for(int i=n-1; i>=0; i--){
	if(arr[i] == 0){
		arr[i] = 1;
	}
	else{
		arr[i] = -1;
	}
   }
   */
   int start =0;
   int endd =0;
   for(int i=0; i<n; i++){
	   int zero = (arr[i]==0) ? 1 : -1 ;
	   start = max(zero, start+zero);
	   endd = max(start, endd);
   }

   if(count == n){
		cout<<n-1<<endl;
	}
	else{
		cout<<count+endd<<endl;
	}




return 0;
}
