#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
     string s;       
     cin>>s; 
     
                if(s[0] !='1' or s[1] !='0' or s.size() <3){
                    cout<<"NO"<<endl;
                }
                else {
                    if(s.size() < 4 and s[2]== '1'){
                        cout<<"NO"<<endl; 
                    }
                    else{
                        if(s[2] =='0' ) cout<<"NO"<<endl;
                        else
                        cout<<"YES"<<endl;
                    }
                }



     
         
     }
}