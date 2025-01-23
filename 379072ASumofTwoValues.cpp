#include<bits/stdc++.h>
using namespace std;

int main()
{

		int n, k;
		cin>>n>>k;
		vector<pair<int, int>>pr;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			pr.push_back({x, i+1});

		}
		sort(pr.begin(), pr.end());
		int left = 0;
		int right = n-1;
		while(left < right){
			int ans = pr[left].first + pr[right].first;
			if(ans == k){
				cout<<pr[left].second <<" "<<pr[right].second<<endl;
				return 0;
			}
			if(ans > k){

				right--;
			}
			else{
				left++;
			}

		}
		cout<<-1<<endl;



return 0;
}
