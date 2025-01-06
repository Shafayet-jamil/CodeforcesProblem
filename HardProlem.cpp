#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int test;
   cin>>test;
   while(test--){
    int m,a,b,c; 
    cin>>m>>a>>b>>c; 
    
    int total = 2*m; 
    
     int row1 = min(m, a); 
     int row2 = min(m, b); 
     
     int result = row2+row1; 
     int ans =0; 
     if(total>result){
       int need = total - result; 
        if(need>c){
          ans = result+c;
        }
        else{
          ans = result+need; 
        }
       
       cout<<ans<<endl; 
     }
     else {
       int ans1 = min(total, result); 
       cout<<ans1<<endl; 
     }
    
    
   }
    return 0;
}