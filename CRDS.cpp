#include <iostream>
typedef unsigned long long ll;
using namespace std;
 
int main() {
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<(n*(3*n+1)/2)%1000007<<endl;
	}
	return 0;
}
