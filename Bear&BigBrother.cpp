#include<bits/stdc++.h>
using namespace std;

int main(){
   int a, b;
   cin>>a>>b;
   int cnt=0;
   for(int i=0; i<10; i++){
   a = a*3;
   b = b*2;
   cnt++;
   if(a>b) break;

   }


   cout<<cnt<<endl;
return 0;
}
