#include<bits/stdc++.h>
using namespace std;

int main()
{
	    int n;
		cin>>n;
		int arr[n];
		stack<int>st;

		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
	   st.push(arr[0]);
	   for(int i=1; i<n; ++i){

		  st.push(arr[i]);
		  if(arr[i] < 0 ){

			st.pop();
i+=1;
		  }


	   }
	   int sum=0;
	   while(!st.empty()){
		sum+=st.top();
		st.pop();
	   }
	   cout<<sum<<endl;


return 0;
}
