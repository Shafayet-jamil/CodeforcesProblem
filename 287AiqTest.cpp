#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row =5;
    int col =5;

    char arr[row][col];
    for(int i=1; i<row; i++)
    {
        for(int j =1; j<col; j++)
        {
            cin>>arr[i][j];

        }
    }


    int res=0;
    for(int i=1; i<4; i++)
    {
        for(int j=1; j<4; j++)
        {
            if(arr[i][j] == '#') res++;
            if(arr[i][j+1] == '#') res++;
            if(arr[i+1][j] == '#') res++;
            if(arr[i+1][j+1] == '#') res++;
            if(res>=3)
            {
                cout<<"YES";
                return 0;
            }
            else
            {
                res=0;
                if(arr[i][j] == '.') res++;
                if(arr[i][j+1] == '.') res++;
                if(arr[i+1][j] == '.') res++;
                if(arr[i+1][j+1] == '.') res++;
                if(res>=3){
					cout<<"YES";
                res =0;
                return 0;
                }
                else{
					res =0;
                }
            }
        }
    }

    cout<<"NO";
    return 0;
}
