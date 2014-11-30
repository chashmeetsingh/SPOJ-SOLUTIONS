#include <iostream>
#include <map>
typedef unsigned long long ll;
using namespace std;
 
map<ll,ll> a;
 
ll f(ll n){
	if (n==0) return 0;
 
	long long r=a[n];
 
	if (r==0){
		r=max(n,f(n/2)+f(n/3)+f(n/4));
		a[n]=r;
	}
	return r;
}
 
int main() {
	ll n,z=0;
	while(cin>>n){
		z=f(n);
		cout<<z<<endl;
	}
	return 0;
}
