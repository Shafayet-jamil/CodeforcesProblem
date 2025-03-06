#include<bits/stdc++.h>
using namespace std;
int isprime(long long int num)
{
    if(num <=1) return false;
    bool ans = true;
    for(long long int i=2; i<=sqrt(num); i++)
    {
        if(num%i ==0 )
        {
           return false;
        }
    }
    return true;
}

int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        long long int num;
        cin>>num;
        bool ans = false;
        for(long long int i = 2; i<=sqrt(num); i++){
			if(1LL* isprime(i) && i*i == num){
				ans = true;

			}
        }
        if(ans == true){
			cout<<"YES"<<endl;
        }
        else{
			cout<<"NO"<<endl;
        }

    }
    return 0;
}
