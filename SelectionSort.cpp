#include<bits/stdc++.h>
using namespace std;

void selectSort(vector<int>&arr)
{
    int n = arr.size();
    for(int i =0; i<n-1; i++)
    {
        int minidx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }

        if(minidx !=i)
        {
            swap(arr[i], arr[minidx]);
        }
    }



}


int main()
{
    //this is for writing file
    ofstream writeFile("C:/Users/Shafayet Jamil/OneDrive/Desktop/Academic/Semister 2.2/Design And Analysis of Algorithm Lab/selectionSortUnsorted.txt");
    srand(time(0));

    //checking if wrong or not
    if(writeFile.is_open())
    {
        for(int i=0; i<1000; i++)
        {
            //generating 1000 random number from 100-1000
            int random = rand()% ((1000-100) +1)+100;
            writeFile<< random <<endl;
        }
    }
    else
    {
        cout<<"Error on creating file."<<endl;
        return 1;

    }


    writeFile.close();


    //now reading file
    ifstream readFile("C:/Users/Shafayet Jamil/OneDrive/Desktop/Academic/Semister 2.2/Design And Analysis of Algorithm Lab/selectionSortUnsorted.txt");
    vector<int>v;//creating vector for push the numbers
    if(readFile.is_open())
    {
        int a;
        while(readFile >> a)
        {
            v.push_back(a);
        }

    }
    else
    {

        cout<<"Error on file opening"<<endl;
        return 1;

    }
    readFile.close();
    cout<<"Sorted element's are: "<<endl;
    selectSort(v); //calling the selection sort function
    for(auto i: v) cout<<i<<endl;//printing in terminal


    ofstream sortFile("C:/Users/Shafayet Jamil/OneDrive/Desktop/Academic/Semister 2.2/Design And Analysis of Algorithm Lab/SelectionSortedFile.txt");
    if(sortFile.is_open())
    {

        for(int num : v)
        {
            sortFile <<num<<endl;
        }
        sortFile.close();
    }
    else
    {
        cout<<"Error"<<endl;
        return 1;

    }
    return 0;
}
