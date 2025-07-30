#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main(){
    int test;
    cin>>test;

    while(test--){
       long long int n, x;
       cin>>n>>x;
       long int arr[n];
       for(int i=0; i<n; i++){
         cin>>arr[i];
         }

       long long int mn = 0;
       long long mx=0;
       for(int i=0; i<n; i++){
           mn+=arr[i];
           mx +=ceil(arr[i]*1.0 /x);

       }
       mn = ceil(mn*1.0 / x);

       cout<<mn<<" "<<mx<<endl;
    }

return 0;
}
