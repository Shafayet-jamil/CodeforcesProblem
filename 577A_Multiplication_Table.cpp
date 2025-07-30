#include<bits/stdc++.h>
using namespace std;

int main(){

       long long int n, x;
       cin>>n>>x;
       int cnt=0;

        for(long long int i=1; i<=n; i++){
            if(x%i==0 and x/i <=n){
                cnt++;
            }
        }


       cout<<cnt<<endl;



return 0;
}
