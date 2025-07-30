#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main(){
    int test;
    cin>>test;

    while(test--){
       int n;
       cin>>n;
       int arr[n];
      string s;
      cin>>s;
      int left=0, right=0, lmx=0, rmx=0;

      for(int i=0; i<s.size(); i++){
        if(s[i] == '<'){
            left++;
            rmx = max(rmx, left);
            right = 0;
        }
        else if(s[i]=='>'){
            right++;
            lmx = max(lmx, right);
            left=0;
        }
      }
     cout<<max(lmx, rmx)+1<<endl;
    }

return 0;
}
