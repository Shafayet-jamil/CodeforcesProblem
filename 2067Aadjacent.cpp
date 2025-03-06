#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
      int x, y;
      cin>>x>>y;
      int ans = x-y+1;
      if((x+1) == y){
        cout<<"Yes"<<endl;
      }

      else if(ans%9==0 && ans >0 ){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }
    return 0;
}
