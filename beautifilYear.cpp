#include<bits/stdc++.h>
using namespace std;
int main(){
    int year; 
    cin >> year;
    
    string s = to_string(year);
    set<int> month(s.begin(), s.end());

    while(true){
        year= year+1; 
        if(month.size() == s.size()){
            break;
        }

    } 
    cout << year;
    return 0;



}