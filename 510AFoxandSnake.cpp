#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;
    char arr[row][col];


    for(int i=1; i<=row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i%4==0)//row k jodi 4 dara bag dei tahole last
            {
                if(j==0)
                {
                    cout<<"#";
                }

                else
                {
                    cout<<".";
                }
            }
            else if(i%4==2)
            {

                if(j==col-1)
                {
                    cout<<"#";
                }

                else
                {
                    cout<<".";
                }

            }

            else
            {
                cout<<"#";
            }
        }
        cout<<endl;

    }



    return 0;
}
