#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int len = s.size();
        int digit = s[0]-'0';
        int ans = (digit-1)*10 + len*(len+1)/2;
        cout<<ans<<endl;
    }
        return 0;
    }
