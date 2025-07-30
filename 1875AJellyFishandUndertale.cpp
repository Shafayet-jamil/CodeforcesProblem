#include<bits/stdc++.h>
using namespace std;


int main(){
    int test;
    cin>>test;

    while(test--){
       long long int a, b, n;
       cin>>a>>b>>n;
       long long int arr[n];

       for(int i=0; i<n; i++){
         cin>>arr[i];
         }
      long long int sum = b;

      for(int i=0; i<n; i++){
        if(arr[i] >= a){
            sum+= (a-1);
        }
        else if(arr[i] < a){
            sum+=arr[i];
        }
      }
      cout<<sum<<endl;

    }

return 0;
}
