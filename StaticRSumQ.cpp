
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int sz, q;
	cin>>sz;
    long long int arr[sz];
    long long int pre[sz];
    fill(pre, pre+sz, 0);

    for(int i=0; i<sz; i++){
		cin>>arr[i];
    }
    cin>>q;
    pre[0] = arr[0];

    for(int i=0; i<sz; i++){
        pre[i] = (pre[i-1] + arr[i]);
    }


    while(q--){
		long long int l, r;
		cin>>l>>r;
        //for(int i=l; i<r; i++){
         long long int sum=0;
		 //if(l==1){
			//sum = pre[r];
		 //}
		 //else{
            sum = pre[r]- pre[l-1];
		 //}
        //}
        cout<<sum<<endl;
    }

    return 0;
}
