#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6+123;
int arr[mx];



int main()
{
    int limit = 1202; // we set the limit for our sobuda
     //finding the all divisors of n;
    //vector<int>v;

    for(int i=1; i<=limit; i++)
    {
        for(int j=i; j<=limit; j+=i)
        {
        	arr[j]++;
        }
    }

    int n;
    cin>>n;
    while(n--){
       int x;
       cin>>x; //numeber of divisors of x
       cout<<arr[x]<<" ";
       cout<<endl;
    //}
    //for(int i=1; i<=n; i++){

    }



    return 0;
}


/*
const int mx = 1e5;
int arr[mx];
int main()
{
    //optimize();

    int lim = 1e6;

    for ( int i = 1; i <= lim; i++ ) {
        for ( int j = i; j <= lim; j += i ) {
            cnt[j]++;
        }
    }

    int n;
    cin >> n;

    while ( n-- ) {
        int x;
        cin >> x;
        cout << cnt[x] << endl;
    }


    return 0;
}


*/
