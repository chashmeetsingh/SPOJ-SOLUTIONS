#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ll;
 
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
	ll a,b,c;
	//cin>>t;
	//while(t--){
		cin>>a>>b>>c;
		cout<<modexpo(a,b,c)<<endl;
	//}
	return 0;
}
