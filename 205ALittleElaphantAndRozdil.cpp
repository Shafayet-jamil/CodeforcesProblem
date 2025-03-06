
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>arr(n);
    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;

    }

    bool ans = false;
    auto jamil = min_element(arr.begin(), arr.end())- arr.begin();
    auto mn = *min_element(arr.begin(), arr.end());

    for(auto i: mp)
    {
        if(i.first == mn and i.second > 1){

				  ans = true;
				  break;

        }

    }
    if(ans == true)
    {

        cout<<"Still Rozdil"<<endl;
    }
    else
    {

        cout<<jamil+1<<endl;
    }


    return 0;
}
