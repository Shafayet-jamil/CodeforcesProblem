
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, k, p;
        cin>>n>>k>>p;
        //int arr[n];
        int ans =0;

        if((n*p < abs(k)))
        {
            cout<<-1<<endl;
            // break;
        }
        else
        {
            for(int i=0; i<=n; i++)
            {
                if(i*p >= abs(k))
                {
                    ans = i;
                    cout<<ans<<endl;
                    break;
                }
            }


        }


    }

    return 0;
}
