#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
      long long int n;
      cin>>n;
      long int cnt=0;
      for(long long int  i=0; i<=n; i++){
        // long long int ans = ans;
         if( i % 3  == i%5 ){
           ++cnt;
         }
      }
      cout<<cnt<<endl;
    }
    return 0;
}


