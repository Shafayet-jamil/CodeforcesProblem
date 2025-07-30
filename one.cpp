#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
     string s;
     cin>>s;
     for(int i=0; i<s.size()-1; i++){
       if(s[i] == 'F' and s[i+1] == 'F' and s[i+2] == 'T'){
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
       }
       if(s[i] == 'N' and s[i+1] == 'T' and s[i+2] == 'T'){
         sort(s.begin(), s.end());
         reverse(s.begin(), s.end());
       }
     }
     std::cout << s << std::endl;

   }
    return 0;
}
