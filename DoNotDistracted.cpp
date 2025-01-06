
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
        string x;
        cin>>x;
        int chk=0;
        for(int i=0;i<n;i++)
        {

            int pos=x.find(x[i],i+1);
            if(pos>=0 && pos<n && x[i]!=x[i+1]){chk=1;
            break;}
            else
            {
                chk=0;
            }
        }
        if(chk==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }

    return 0;
}

