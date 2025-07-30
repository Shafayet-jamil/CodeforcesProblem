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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {

            if(arr[i]==1)
            {
                arr[i]+=1;
            }
        }

        for(int i=1; i<n; i++)
        {
            if(arr[i] % arr[i-1] == 0)
            {
                arr[i]+=1;
            }
        }


        for(auto i :  arr)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    }

    return 0;
}
