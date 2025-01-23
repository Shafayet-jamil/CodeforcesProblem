
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {

    		int n;
    		cin>>n;
    		vector<int>arr(n);
    		for(int i=0; i<n; i++)
    		{
    			cin>>arr[i];
    		}
    	 sort(arr.begin(), arr.end());
    		int q;
    		cin>>q;
    		int brr[q];
    		for(int i=0; i<q; i++){
    			cin>>brr[i];
    		}

    		for(int i=0; i<q; i++){
    		  int low = 0;
    		  int hi = n-1;
    		  int ans = n;
    		  while(low<=hi){
    		    int mid = low + ( hi - low)/2;
    		    // if(arr[mid] == brr[i]){

    		    //   hi = mid-1;
    		    //   // break;
    		    // }
    		    if(arr[mid] > brr[i]){
    		      // cout<<mid<<endl;
    		      ans = mid;
    		      hi = mid-1;
    		    }
    		    else{
    		      low= mid+1;
    		    }
    		  }
    		  cout<<ans<<endl;
    		// 	int lo = upper_bound(arr.begin(), arr.end(), brr[i])-arr.begin();
    		// 	cout<<lo<<endl;;
    		}

    return 0;
    }
