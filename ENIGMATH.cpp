#include <iostream>
using namespace std;
typedef unsigned long long ll;
 
ll gcd (ll x,ll y){
	if (y==0) return x;
	else return gcd(y,x%y);
}
 
int main() {
	ll t,x,y,c,temp;
	cin>>t;
	while(t--){
		cin>>x>>y;
		c=gcd(x,y);
		x=x/c;
		y=y/c;
		temp=y;
		y=x;
		x=temp;
		cout<<x<<' '<<y<<endl;
	}
	return 0;
}
