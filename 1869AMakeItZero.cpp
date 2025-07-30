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

       if(n&1){//n==odd then
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;

        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;

       }
       else{ // if n==even then
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
       }

    }

return 0;
}
