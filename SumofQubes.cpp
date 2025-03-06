//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx = 1e4+123;

ll qube[mx];
int main()
{
    int lim = 1e4;
    int test;
    cin>>test;
    for(int i=1; i<=lim; i++)
    {
        qube[i] = (i*i*i);
    }
    while(test--)
    {
        ll n;
        cin>>n;
        bool res = false;
        for(int i=1; i<=lim; i++)
        {
            ll b = n - (i*i*i);

            if(b < 1) break;
            bool ans = binary_search(qube, qube+lim, b);
            if(ans)
            {
                res= true;

                break;
            }
        }

        if(res == true) {
			cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
            break;
        }

    }


    return 0;
}

