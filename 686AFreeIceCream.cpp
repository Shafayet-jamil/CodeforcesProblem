
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, x;
	cin>>n>>x;
	int cnt=0;
	while(n--){
		char ch;
		long long int d;
		cin>>ch>>d;
		if(ch =='+'){
			x+=d;
		}
		else{

			if(x<d){
				cnt++;
			}
			else{
				x-=d;
			}
		}
	}
	cout<<x<<" "<<cnt;



return 0;
}
