#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main(){
    int test;
    cin>>test;


    while(test--){
      long long int a, b;
       cin>>a>>b;

       if(b > a){
        swap(a, b);
       }
      long long int g = a-b;
       if(a==b){
        cout<<0<< " "<<0<<endl;
       }
       else{
        long long int an = g;
        long long int mo = min(b%g, g-b%g);
        cout<<an<<" "<<mo<<endl;
       }


    }

return 0;
}
