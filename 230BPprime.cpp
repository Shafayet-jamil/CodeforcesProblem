#include<bits/stdc++.h>
using namespace std;

int main()
{
	//initialize the array with limit
	long long int mx = 1e6+12;
	vector<int> arr(mx, 0);

	//find the all divisors of the array and store it
	for(int i=1; i < mx; i++){
		for(int j = i; j <mx; j += i){
			arr[j]++;
		}
	}

	long int test;
	cin>>test;
	while(test--)
	{
		long long  n;
		cin>>n;
		//chack if this number have exat 3 divisors or not.
		if(arr[n] == 3){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;


	}
	//delete[] arr;

return 0;
}
