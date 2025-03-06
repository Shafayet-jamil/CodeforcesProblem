#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin>>a>>b;
    long long int arr[a];
    long long  int brr[b];
    for(long long int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    for(long long int i=0; i<b; i++)
    {
        cin>>brr[i];
    }
    long long int initial = 0;
    for(long long int i =1; i<a; i++){
		initial = __gcd(initial, abs(arr[i]- arr[0]));
    }
    for(long long int i=0; i<b; i++){
		long long int ans = __gcd(initial, arr[0]+ brr[i]);cout<<ans<<" ";
    }



    return 0;
}
