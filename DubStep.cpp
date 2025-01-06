#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();

    for(int i=0;i<n;i++){

        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
            i=i+2;

            cout<<' ';
        }
        else cout<<s[i];
    }

    //cout<<s<<endl;
return 0;
}
/*
else{
            cout<<s[i];
            i++;
        }
    }
    if(s[n-3]!='W'){
        cout<<" "<<s[n-3]<<s[n-2]<<s[n-1]<<endl;
    }
*/
