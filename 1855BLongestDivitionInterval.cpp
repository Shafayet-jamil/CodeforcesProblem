#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;

const long long lim = 1e6;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long int n;
        cin>>n;
        long int ans=0;
        for(int i=1; i<=100; ++i)
        {
            if(n%i == 0)
            {
                ans++;

            }
            else{
                break;
            }

        }
        cout<<ans<<endl;
    }

    return 0;
}
