#include<bits/stdc++.h>
using namespace std;

int main(){

 int test;
 cin>>test;
 vector<int> all(test);
 int sejera=0, dima =0;
 int stotrack=1;
 for(int i=0; i<all.size(); i++) cin>>all[i];

  while(!all.empty()){
	if(stotrack==1){
		if(all[0] > all.back()){
			sejera +=all[0];
			all.erase(all.begin());
		}
		else{
			sejera+=all.back();
			all.pop_back();
		}
		stotrack =2;
	}
	else{
		if(all[0]>all.back()){
			dima+=all[0];
			all.erase(all.begin());
		}

		else{
			dima+=all.back();
			all.pop_back();
		}
		stotrack =1;
	}

  }


	cout<<sejera <<" " <<dima;


return 0;
}
