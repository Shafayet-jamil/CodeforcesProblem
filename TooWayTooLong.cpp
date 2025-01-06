#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n; 
    while(n--){
        string s; 
        cin >> s;
        int p = s.length();
       
            if(p>10){
                cout << s[0] << p-2 << s[p-1] << endl;
            }
            else{
                cout << s << endl;
             }
    }
     // Input number of test cases
    
return 0;
}