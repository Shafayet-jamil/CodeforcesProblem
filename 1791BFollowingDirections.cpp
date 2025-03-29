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
        string s;
        cin>>s;
        int x=0, y=0;
        bool ans = false;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'R')
            {
                x++;
            }


            if(s[i]== 'U')
            {
                y++;
            }
            if(s[i] == 'D')
            {
                y--;
            }

            if(s[i]== 'L')
            {
                x--;
            }
            if(x ==1 && y ==1)
            {
                ans = true;
                break;
            }


        }

        if(ans == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
