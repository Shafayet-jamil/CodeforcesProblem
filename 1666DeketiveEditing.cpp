#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main()
{
    int test;
    cin>>test;
    map<char, int>smap, tmap;
    while(test--)
    {
        string s, t;
        cin>>s>>t;

        for(int i=0; i<s.size(); i++)
        {
            smap[s[i]]++;
        }
        for(int i=0; i<t.size(); i++)
        {
            tmap[t[i]]++;
        }
//DETERMINED TRME
        int i=0, j=0;
        while(i<s.size() && j<t.size())
        {

            if(s[i] == t[j])
            {
                if(smap[s[i]] < tmap[t[j]]){
                    break;
                }
                if(smap[s[i]] == tmap[t[j]])
                {
                   tmap[t[j]]--;
                   j++;
                }
            }
            smap[s[i]]--;
            i++;

        }

        if(j==t.size()){
                ys;
        }
        else no;


    }

    return 0;
}
