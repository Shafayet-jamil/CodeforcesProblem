#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;
//#define for(i, n) for(int i=0; i<n; i++);


int main(){
    int test;
    cin>>test;

    while(test--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++){
         cin>>arr[i];
         }
      bool ans = false;
      for(int i=0; i<n; i++){
        if(arr[i] <= 2*i || arr[i] <= 2*(n-i-1)){
            ans= true;
        }
      }
      if(ans == true){
        no;
      }
      else {
        ys;
      }

    }

   return 0;

}
