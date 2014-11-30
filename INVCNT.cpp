#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int p,q,r,t;
	stringstream ss;
	string a,b,c;
	cin>>t;
	while(t--)
	{
	cin>>a>>b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	ss<<a;
	ss>>p;
	ss.clear();
	ss<<b;
	ss>>q;
	r=p+q;
	ss.clear();
	ss<<r;
	ss>>c;
	ss.clear();
	reverse(c.begin(),c.end());
	ss<<c;
	ss>>r;
	ss.clear();
	cout<<r<<endl;
	}
	return 0;
}
