#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, m;
	cin>>n>>m;
	vector<long long int>v(n);
	vector<long long int>v1(m);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	for(int i=0; i<m; i++){
		cin>>v1[i];

	}

	sort(v.begin(), v.end());
	for(int i=0; i<m; i++){

		long long int ans = upper_bound(v.begin(), v.end(), v1[i] ) - v.begin();
		cout<< ans<<" ";

		}
		cout<<endl;


}

/*
int low = 0;
	        int hi = n-1;
	        int ans =n;
	        while(low<=hi){
					int mid = low + (hi-low) /2;
				if(v[mid] > v1[i]){
					ans = mid;
					hi = mid-1;
				}
				else{
					low = mid+1;
				}
	        }

*/
