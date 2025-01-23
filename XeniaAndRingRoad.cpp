#include <iostream>
using namespace std;

int main()
{
    long long int n, m;
    cin>>n>>m;
    long long int a[m];
    long long int cnt =0;
    for(int i=0; i<m; i++){
      cin>>a[i];
    }
    cnt = a[0]-1;
    for(int i=0; i<m-1; i++){
       if(a[i] > a[i+1]){
         cnt += (n-a[i])+ (a[i+1]);
       }
       else{
         cnt+=(a[i+1]-a[i]);
       }
    }



    cout<<cnt<<endl;
    return 0;
}
