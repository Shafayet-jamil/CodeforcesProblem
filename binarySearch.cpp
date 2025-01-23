#include<bits/stdc++.h>
using namespace std;

 int binary(int arr, int low, int high, int target){

      while(low<high){
		int mid = high-low/2;
		if(arr[mid] > target){
			start = mid+1;

		}
		else if(arr[mid]< target){
			last = mid-1;
		}
		else if(arr[mid] == target){
			cout<<"Target found: " << arr[mid]<<endl;
		}
		else{
			cout<<"Target not found."<<endl;
		}
    }



 }
int main()
{
    //int n;
    //cin>>n;
   // int arr[n];
    //for(int i=0; i<n; i++){
		//cin>>arr[i];
   // }
    int arr[] = {1,2, 4, 5, 7, 8, 9, 10, 15, 17};

    int start = 0;
    int last = 9;
    int target = 5;


    return 0;
}
