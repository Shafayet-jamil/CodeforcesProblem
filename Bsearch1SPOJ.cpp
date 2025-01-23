#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    while(q--)
    {
        int t;
        cin>>t;
       int ans = -1;
        int start= 0;
        int ed= n-1;
        while(start<ed)
        {
            int mid = ed+start/2;
            if(arr[mid] == t)
            {
                ans = mid;
            }
            else if(arr[mid] > t)
            {
                ed = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
