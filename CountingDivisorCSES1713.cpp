
//YOU ARE GIVEN A NUMBER,, YOU NEDD TO FIND ITS ALL dividesors
//example 18 = 1, 2, 3, 6, 18 == ans = 5
//this can be solved in O(n.sqrt(n))/ O(n.log(n)) of time complexity

#include<bits/stdc++.h>
using namespace std;
const int lim = 1e6+123;
int arr[lim];

int main()
{

	// store the all divisors in the array
	for(int i=1; i<=lim; i++){
		for(int j=i; j<=lim; j = j+i){
			arr[j]++;
		}
	}

	int test;
	cin>>test;
	while(test--)
	{
        long long int sum =0;
		int n;
		cin>>n;
		sum+=(n*arr[n]);
		cout<<sum<<endl;
		//find the all divisors of n;

	}

return 0;
}
