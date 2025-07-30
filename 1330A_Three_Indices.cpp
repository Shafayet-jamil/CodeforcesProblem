#include<bits/stdc++.h>
using namespace std;

#define ys cout<<"YES"<<endl;
#define no cout<<"No"<<endl;


int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        bool ans= false;
        int one=0, two=0, three=0;
        for(int i=0; i<n-2; i++){
            //for(int j=i+1; j<n-1; j++){
                //for(int k =j+1; k<n; k++){
                    if(arr[i+1] > arr[i] && arr[i+1] > arr[i+2]){
                        ans = true;
                        one= i+1;
                        two=i+1+1;
                        three=i+1+1+1;
                        break;
                    }
              //  }
            //}
        }

         if(ans == true){
            ys;
            cout<<one<<" "<<two<<" "<<three<<endl;
         }
         else{
            no;
         }


    }

    return 0;
}
