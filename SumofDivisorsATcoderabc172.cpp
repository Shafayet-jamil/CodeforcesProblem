
#include<bits/stdc++.h>
using namespace std;
const long long int lim = 1e7+124;
long long int arr[lim];
int main()
{

    for(long long int i=1; i<=lim; i++)
    {
        for(long long int j = i; j<=lim; j+=i)
        {
            arr[j]++;
        }
    }
    long long int test;
    cin>>test;
    long long int sum=0;
    for(long long int i=1; i<=test; i++)
    {
        sum+=(i*arr[i]);
    }
    cout<<sum;


    return 0;
}
