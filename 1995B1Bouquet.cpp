
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int n, m;
        cin>>n>>m;
        int arr[n];
        map<long long int, long long int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        long long int ans = 0, mx =0;

        for(auto it = mp.begin(); it!= mp.end(); it++)
        {
            long long x = it->first, y = it->second;
            mx = max(mx, mp[i]);
        }
        if(ans <= mx)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<mx<<endl;
        }

    }

    return 0;
}
