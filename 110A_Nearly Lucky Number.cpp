#include<bits/stdc++.h>

using namespace std;

int main(){
   string s;
   cin>>s;
   int ans = 0;
   long long int n = s.length();

   for(int i=0; i<n; i++){
    if(s[i] == '4' and s[i] == '7'){
        ans++;
    }

   }
   if(ans == 4 or ans == 7){
        cout<<"YES"<<endl;
   }
   else{
      cout<<"NO"<<endl;
   }

  return 0;
}
