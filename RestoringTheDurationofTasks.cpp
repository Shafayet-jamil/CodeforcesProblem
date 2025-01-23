#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
      int n;
      cin>>n;
      int arr[n];
      int brr[n];
      for(int i=0;i<n; i++){
        cin>>arr[i];
      }
      for(int i=0;i<n; i++){
        cin>>brr[i];
      }
       cout<<(brr[0] - arr[0])<<" ";
      for(int i=1; i<n; i++){
        // if(arr[i]<brr[i]){
          // cout<<(arr[i] - arr[i])<<" ";
        // }
        cout<<brr[i] - max(brr[i-1], arr[i])<<" ";

      }
      cout<<endl;

    }
    return 0;
}
