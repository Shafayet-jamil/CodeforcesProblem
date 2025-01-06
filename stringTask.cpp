

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c =='y' );
}
int main() {
    string n;
    cin >> n;
    string ans; 
    // string s = toupper(n);
    

    for(auto u : n){
          char c = tolower(u);
       if(!isVowel(c)){
           ans += '. ';
           ans+=c; 

        }
       cout << ans << endl;
    }
    
    return 0;
}