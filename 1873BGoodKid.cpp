#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++){
		  cin>>v[i];
		}

		sort(v.begin(), v.end());
		int mn = v.front();
		v.front() = mn+1;
		int sum=1;
		for(int i=0; i<n; i++){
		  sum*=v[i];
		}
		cout<<sum<<endl;

	}

return 0;
}
