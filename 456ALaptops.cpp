#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int a[test];
    int b[test];
    bool ans = false;
    for(int i=0; i<test; i++)
        cin>>a[i]>>b[i];

    for(int i=0; i<test; i++)
    {


        if(a[i] != b[i])
        {
            cout<<"Happy Alex";
            return 0;
        }


    }
cout<<"Poor Alex";
    return 0;
}
