#include<bits/stdc++.h>
using namespace std;

int main()
{
	int ab, bc, ca;
	cin>>ab>>bc>>ca;

	int ans = (ab*bc)/ca;
	int b = sqrt(ans);
	int a = ab/b;
	int c = bc/b;

	int res = 4*a+ 4*b + 4*c;
	cout<<res<<endl;

return 0;
}
