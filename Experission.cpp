#include<bits/stdc++.h>
using namespace std;

int main(){
   int a, b, c;
   cin>>a>>b>>c;

   int sum = (a+b)*c;
   int sum2 = a*(b+c);
   int sum3 = a*b*c;
   int sum4 = a+(b+c);

   int mx = max(sum, max(sum2, max(sum3, sum4)));

/*
   vector<int>v;

   v.push_back(sum);
   v.push_back(sum2);
   v.push_back(sum2);
   v.push_back(sum2);

   int mx = *max_element(v.begin(), v.end());

*/

    cout<<mx;
return 0;
}
