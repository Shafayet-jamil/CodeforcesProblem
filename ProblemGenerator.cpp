#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        int mx =0;
        for(char ch = 'A'; ch < 'H'; ch++){
			int cnt = count(s.begin(), s.end(), ch);
			mx += max(0, (m-cnt));
        }
        cout<<mx<<endl;
    }
        /*
        int a =0;
        int b =0;
        int c =0;
        int d =0;
        int e = 0;
        int f = 0;
        int g = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'A')
            {
                a++;
            }
            if(s[i] == 'B')
            {
                b++;
            }
            if(s[i] == 'C')
            {
                c++;
            }
            if(s[i] == 'D')
            {
                d++;
            }
            if(s[i] == 'E')
            {
                e++;
            }
            if(s[i] == 'F')
            {
                f++;
            }
            if(s[i] == 'G')
            {
                g++;
            }
        }


        int sum=0;
        if(a >= m)
        {
            sum+=0;
        }
		if(a < m)
        {
            sum+=(m-a);
        }
        if(b >= m)
        {
            sum+=0;
        }
        if(b < m)
        {
            sum+=(m-b);
        }
        if(c >= m)
        {
            sum+=0;
        }
	    if(c < m)
        {
            sum+=(m-c);
        }
        if(d >= m)
        {
            sum+=0;
        }
        if(d < m)
        {
            sum+=(m-a);
        }
        if(e >=m)
        {
            sum+=0;
        }
        if(e < m)
    {
        sum+=(m-e);
        }
        if(f >= m)
    {
        sum+=0;
    }
    if(f < m)
    {
        sum+=(m-f);
        }
        if(g >= m)
    {
        sum+=0;
    }
    if(g < m)
    {
        sum+=(m-g);
        }
       cout<<sum<<endl;

    }
    */

    return 0;
}
