#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long int n, k;
        cin>>n>>k;
        long long int ans=0;

        if(n==1)
        {

            cout<<k<<endl;

        }
        else if(n==k){
            cout<<1<<endl;
        }
        else if( k>n )
        {
            ans = k/n;
            if(k%n !=0) ans++;
 cout<<ans<<endl;
        }
        else if(n > k)
        {
            int m = n/k;
            if(n%k !=0) m+=1;

            k*=m;

            ans = k/n;
            if(k%n!=0) ans+=1;
 cout<<ans<<endl;
        }


    }

    return 0;
}
