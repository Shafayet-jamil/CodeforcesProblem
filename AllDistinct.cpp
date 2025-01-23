#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int s;int o;
        cin>>s;
        set<int>se;
        for(int i=0; i<s; i++)
        {

            cin>>o;
            se.insert(o);
        }

        if((s-se.size())%2==0)
        {
            cout<<se.size()<<endl;

        }
        else
        {
            cout<<se.size()-1<<endl;
        }
}
 return 0;
}
