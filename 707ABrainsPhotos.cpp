
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int row, col;
	cin>>row>>col;

   char arr[row][col];
   bool ans = false;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
			if(arr[i][j] == 'C' || arr[i][j] == 'M' ||arr[i][j] == 'Y'){
				ans = true;
			}
		}
	}
	if(ans == false){
		cout<<"#Black&White"<<endl;
	}
	else{
		cout<<"#Color"<<endl;
	}


return 0;
}
