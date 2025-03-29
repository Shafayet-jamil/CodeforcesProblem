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
        set<int>st;
        string s;
        cin>>s;
        for(auto i : s){
			i = tolower(i);
        }

        string k = "meow";
        for(int i=0; i<n; i++)
        {
            for(int j=0; i<n; j++)
            {
                if(k[i] == s[i])
                {
                    st.insert(i);
                }
            }


        }
        vector<int>v;
        for(auto i : st){
			v.push_back(i);
        }

        if(is_sorted(v.begin(), v.end())){
			cout<<"YES"<<endl;
        }
        else{
			cout<<"NO"<<endl;
        }

    }



    return 0;
}
