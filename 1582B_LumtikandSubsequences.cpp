#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main(){
    int test;
    cin>>test;

    while(test--){
      long long int n;
       cin>>n;
       long long int arr[n];
       for(int i=0; i<n; i++){
         cin>>arr[i];
         }
        long long  int zero =0;
        long long  int one =0;

         for(auto i: arr){
            if(i ==0) zero++;
            else if(i==1) one++;
         }
         long long int ans = pow(2, zero);
         cout<<ans*one<<endl;

    }

return 0;
}
