#include <iostream>
typedef unsigned long long ll;
using namespace std;
 
ll modexpo(ll a ,ll b,ll c){
	ll r;
	if (b==0) return 1;
	if (b==1) return a;
 
	r=modexpo(a,b/2,c);
	r=(r*r)%c;
	if (b%2)
		r=(r*a)%c;
	return r;	
 
}
 
int main() {
	ll n,k,b,a,d,c;
	cin>>n>>k;
	while(n!=0 and k!=0){
		b=2*modexpo(n-1,k,10000007);
		a=modexpo(n,k,10000007);
		c=2*modexpo(n-1,n-1,10000007);
		d=modexpo(n,n,10000007);
		cout<<((b%10000007)+(a%10000007)+(c%10000007)+(d%10000007))%10000007<<endl;
		cin>>n>>k;
	}
	return 0;
}
