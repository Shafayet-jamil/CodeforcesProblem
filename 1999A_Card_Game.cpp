#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main(){
    int test;
    cin>>test;

    while(test--){
       int a1, a2, b1,  b2;
       cin>>a1>>a2>>b1>>b2;
      int ans=0;
      if((a1 > b1 and a2 >= b2) || (a1 >=b1 and a2>b2)){
        ans+=2;
      }
      if((a2 > b1 and a1 >=b2) || (a2>=b1 and a1 > b2)) ans+=2;

      cout<<ans<<endl;

    }

return 0;
}
