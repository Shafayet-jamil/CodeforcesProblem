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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int k =0;
        int fin;
        bool one = false;
        int ans=0;
        int res=0;
        for(int i=k; i<n; i++)
        {
            ans*=arr[i];
            for(int j = k+1; j<n; j++)
            {
                res *=arr[j];
            }
            if(ans == res)
            {
                one = true;
                fin = i;
                break;
            }
            else
            {
                res-=arr[i];
            }


        }
        if(one == true)
        {
            cout<<fin<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }


    }

    return 0;
}
