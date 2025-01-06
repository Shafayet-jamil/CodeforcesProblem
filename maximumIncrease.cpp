
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
		cin>>arr[i];
    }
    int mx;
    int cont=0;
     for(int i=0; i<n; i++){
		if(arr[i] < arr[i+1]){
			cont++;
		}

		else{
			mx = cont;
			cont=0;
		}
    }
    int res = max(mx, cont);
    cout<<res<<endl;

return 0;
}
