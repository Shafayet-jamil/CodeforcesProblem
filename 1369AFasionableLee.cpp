
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n];

    for(int i=0; i<n; i++){
      cin>>arr[i];

    }
    for(int i=0; i<n; i++){
      if(arr[i]%2== 0 && arr[i]%4== 0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }


    return 0;
}
