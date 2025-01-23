#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, f, k;
        cin>>n>>f>>k;
        vector<int>v(n);
        int index;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(i == (f-1) && i+1 <n) index = v[i+1];
        }

        sort(v.rbegin(), v.rend());

        v.erase(v.begin(), v.begin()+(k-1));

        int cnt=0;
        bool ans = true;
        cnt = count(v.begin(), v.end(), index);

        /*
        for(int i=0; i<n; i++)
        {
            if(v[i]  == index)
            {
                cnt++;
            }

        } if(cnt == 0)
        */

        if(cnt > 1)
        {
            cout<<"MAYBE"<<endl;
        }
        else if(cnt == 1)
        {
            cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }

    }

    return 0;
}
