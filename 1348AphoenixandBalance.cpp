
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
        // vector<int>arr(n);
        int arr[n];
        // for(int i=1; i<=n; i++)
        // {
        //     arr[i] = pow(2, i);
        // }

      // int len = arr.size();
      // int sum=pow(2, n);
      int sum = (1<<n);
      int sum2=0;
        for(int i=1; i<n/2; i++)
        {
            // sum+=pow(2, i);
            sum+=(1<<i);
        }
        for(int i = n/2; i<n; i++)
        {
            // sum2 += pow(2, i);
            sum2+=(1<<i);
        }
        cout<<abs(sum -sum2)<<endl;
    }



return 0;
}

/*
if(n ==2){
			cout<<2<<endl;
		}
		else if(n ==4){
			cout<<6<<endl;
		}
		else if(n > 4){
*/


