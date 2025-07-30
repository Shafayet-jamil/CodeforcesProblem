#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


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
         sort(arr, arr+n);
         int mx= arr[n-1]-arr[0];
         cout<<mx<<endl;

    }

return 0;
}
