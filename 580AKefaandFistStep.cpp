#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    vector<int>v(test);
    for(int i=0; i<test; i++){
      cin>>v[i];
    }
    int mx = 1;
    int cnt=1;
    for(int i=0; i<test-1; i++){
      if(v[i] <= v[i+1]){
        cnt++;
        // v.erase(remove(v.begin(), v.end(), v[i]), v.end());
      }
      else{
        mx = max(cnt, mx);
        cnt =1;
      }

    }
    mx = max(cnt, mx);
    cout<<mx<<endl;
    return 0;
}


