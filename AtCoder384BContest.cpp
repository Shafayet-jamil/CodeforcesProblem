#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; 
    cin>>n;
    int r;
    cin>>r; 
   
    vector<pair<int, int>>pr(n); 
    for(int i=0; i<n; i++){
      cin>>pr[i].first>>pr[i].second; 
    }
    int sum =0; 
    for(int i=1; i<=pr.size(); i++){
      sum+=pr[i-1].second; 
      if(pr[i].first <= pr[i+1].first){
        sum+=pr[i].second; 
      }
    }
    cout<<r+sum<<endl;
    return 0;
}