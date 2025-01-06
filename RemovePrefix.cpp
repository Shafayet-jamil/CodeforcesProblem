#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
         unordered_set<int>st;

        for(int i=n-1; i>=0; i--){
            if(st.count(arr[i])){
				break;
            }
            st.insert(arr[i]);
             ans = i;
        }
        cout<<ans<<endl;
    }

return 0;
}
