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
        string p;
        p+=s[0];
        for(int i=2; i<s.length()-1; i+=2)
        {
            p+=s[i];
        }
        p+=s[s.length()-1];
        cout<<p<<endl;
    }

    return 0;
}
