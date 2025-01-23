#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, x;
        cin>>n>>x;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int mx = arr[0];
        int diff = 2*(x-arr[n-1]);
        for(int i=1; i<n; i++)
        {
          mx = max(mx, abs(arr[i] - arr[i-1]));

        }
        cout<<max(mx, diff)<<endl;
    }

    return 0;
}
