#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    vector<int>v(12);
    for(int i=0; i<12; i++)
    {
        cin>>v[i];
    }

    sort(v.rbegin(), v.rend());
    int cnt=0;
    int sum =0;
    bool ans =false;
    for(int i=0; i<12; i++)
    {
	   if(sum >= test){
		cout<<0<<endl;
		return 0;
	   }

        sum+=v[i];
        cnt++;
        if(sum >=test){
			ans =true;
			break;
        }


    }
    if( ans == true) cout<<cnt<<endl;
    else cout<<-1<<endl;

    return 0;
}
