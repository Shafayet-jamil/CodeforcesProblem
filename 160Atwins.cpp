#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
      cin>>arr[i];
      sum+=arr[i];
    }

    sort(arr, arr+n);
    sum = sum-arr[n-1];
    int mx = arr[n-1];
    int cnt = 1;

    for(int i =n-2; i>=0; i--){
      if(mx > sum){
         break;
      }
      else{
         cnt++;
        mx+=arr[i];
        sum-=arr[i];
      }
    }
    cout<<cnt<<endl;
    return 0;
}
