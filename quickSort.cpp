
#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int>&arr, int low, int high)
{
    if(low < high){
        int idx = low-1;
        int pivot = arr[high];
        for(int i=low; i<high; i++){
            if(arr[i] < pivot){
                idx++;
                swap(arr[i], arr[idx]);
            }
        }
        int pertition = idx+1;
        swap(arr[pertition],arr[high]);

        quickSort(arr, low, pertition-1);
        quickSort(arr, pertition+1, high);


    }


}
int main()
{
    vector<int>v;
    srand(time(0));
    for(int i=0; i<1000; i++)
    {
        int num = rand()%((1000-0)+1);
        v.push_back(num);
    }
    int cnt=0;
    quickSort(v, 0, v.size()-1);
    for(auto i : v)
    {
        cout<<i<<" "<<endl;
        cnt++;
    }
    cout<<"Total number is: "<<cnt<<endl;

    return 0;
}
