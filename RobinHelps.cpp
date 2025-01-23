#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int n, k;
        cin>>n>>k;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        long long int ans=0;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(arr[i] >= k)
            {
                ans+=arr[i];
                //continue;
            }

			if(arr[i] == 0 && ans > 0 )
            {
                ans--;
                cnt++;

            }

        }

        cout<<cnt<<endl;

    }

    return 0;
}
