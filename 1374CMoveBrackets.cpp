#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		stack<char>st;
		int n;
		cin>>n;
		string s;
		cin>>s;
		for(int i=0; i<n; i++){
			if(s[i] == '('){
					st.push(s[i]);
				}
			else{
					if(!st.empty()&& (st.top() == '(' && s[i] == ')')){
						st.pop();
					}

			}
		}



		cout<<st.size()<<endl;

	}

return 0;
}

//solve with stack implementation...
