#include<bits/stdc++.h>
using namespace std;
int is_prime(int num)
{
    bool ans = true;
    for(int i=2; i<sqrt(num); i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;

}



int main()
{

    long long int lim;
    cin>>lim;
    long long int arr[lim] = {0};
    for(int i=4; i<=lim; i+=2)
    {
        arr[i] = 1;
    }
    for(int i=3; i<=sqrt(lim); i+=2)
    {
        if(is_prime(i))
        {
            for(int j = i*i; j<=lim; j+=i)
            {
                arr[j] = 1;

            }
        }


    }
    arr[1] = 1;
    long long int cnt =0;
    int mx =0;
    for(int i=2; i<=lim; i++)
    {
        if(arr[i] == 0)
        {
        	mx = max(mx, i);
            //cnt++;
            cout<<"The prime number is : "<<i<<endl;
        }
    }
    cout<<mx<<endl;
    //if(is_prime(test)){
    //cout<<"Test is a prime number"<<endl;
    //}
    //else{
    //	cout<<"Test is not a prime number"<<endl;
    //}

    return 0;
}
