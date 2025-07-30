#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
       long long int x, y;
       cin>>x>>y;
       long long int a, b;
       cin>>a>>b;
      long long  int mx = max(x, y);
      long long  int mn = min(x, y);

      long long  int ans = 0;
      if(b < 2*a){
        x-=mn;
        y-=mn;
        ans = mn*b;
      }

      ans += a*(x+y);
       cout<<ans<<endl;

    }

return 0;
}
