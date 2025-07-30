#include<bits/stdc++.h>
using namespace std;


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
         int x = arr[0];
        for(int i=1; i<n; i++){
            x = x&arr[i];
        }
        cout<<x<<endl;

    }

return 0;
}
