#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        int a; 
        cin>>a;
        int arr[a];
        // int mn = arr[0]; 
        for(int i = 0; i < n; i++){
            cin>>arr[i]; 
            // mn = min(mn, arr[i]);
        }
        int sum= 0; 
sort(arr, arr+a);
        for(int i = 0; i < n; i++){
            sum+= (arr[i] - arr[0]); 
        }

    }
    return 0;
}