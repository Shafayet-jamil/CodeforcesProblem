#include <bits/stdc++.h>
using namespace std;
int mx = 1e7;

int main()
{
     int t;
     cin>>t;
     while(t--){
      int row, col;
      cin>>row>>col;
      char arr[row][col];
      pair<int, int> top = {mx, mx}, bottom = {-mx, -mx};

      for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
          cin>>arr[i][j];
        }
      }
      for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
          if(arr[i][j] == '#'){
            top = min(top, {i, j});
            bottom = max(bottom, {i, j});
          }
        }
      }

      int x = (top.first+ bottom.first )/2 +1;
      int y = (bottom.second+top.second)/2+1;
      cout<<x<<" "<<y<<endl;

     }
    return 0;
}
