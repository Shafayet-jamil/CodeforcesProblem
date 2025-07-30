#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main(){
    int test;
    cin>>test;

    while(test--){
      long int n, k;
       cin>>n>>k;
       long long int sz = (n*k);

      long long int arr[sz];
       for(int i=0; i<sz; i++){
         cin>>arr[i];
         }
         long long int sum=0;

        for(int i=0; i<k; i++){
            sz-=(n/2+1);
            sum+=arr[sz];
        }
    cout<<sum<<endl;
    }

return 0;
}
