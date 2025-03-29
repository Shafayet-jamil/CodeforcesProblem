
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        char arr[8][8];
        for(int row=0; row<8; row++)
        {
            for(int col=0; col<8; col++)
            {
                cin>>arr[row][col];
            }
        }
        string s;

        for(int row=0; row<8; row++)
        {
            for(int col=0; col<8; col++)
            {
                if(arr[row][col] !='.')
                {
                    s+=arr[row][col];
                }
            }
        }

        cout<<s<<endl;
    }

    return 0;
}
