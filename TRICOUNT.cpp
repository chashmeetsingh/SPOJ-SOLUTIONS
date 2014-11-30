#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ll;
 
int main() {
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		//(n%2==0)
		cout<<n*(n+2)*(2*n+1)/8<<endl;
//		else	cout<<floor((n*(n+2)*(2*n+1)-1)/8)<<endl;
	}
	return 0;
}
