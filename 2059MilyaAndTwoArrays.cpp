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
        vector<int>arr(n);
        vector<int>brr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>brr[i];
        }
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());


        int one = unique(arr.begin(), arr.end())-arr.begin();
        int two= unique(brr.begin(), brr.end())-brr.begin();

        if(one+two > 3){
			cout<<"YES"<<endl;
        }
        else{
			cout<<"NO"<<endl;
        }


    }

    return 0;
}
