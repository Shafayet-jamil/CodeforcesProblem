#include<bits/stdc++.h>
using namespace std;

int isprime(int num)
{
    for(int i =2; i<=sqrt(num); i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;


}

 const long long int limit = 1e5;
 vector<bool>arr(limit, true);

int main()
{

    arr[0] = false;
    arr[1] = false;
vector<long long int>v;
v.push_back(2);
for(int i=4; i<=limit; i+=2){
  arr[i] = false;
}
    for(int i=3; i<=sqrt(limit); i+=2)
    {
        if(isprime(i))
        {
          v.push_back(i);
            for(long long int j = i*i; j<=limit; j+=i)
            {
                arr[j] = false;
            }
        }

    }




    for(long long int i=1; i<v.size(); i+=100)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}
