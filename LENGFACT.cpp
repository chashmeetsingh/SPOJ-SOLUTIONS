#include <iostream>
#include <cmath>
using namespace std;

int main() {
	unsigned long long t,n,ans;
	cin>>t;
	while(t--){
		//ans=0;
		cin>>n;
		if(n<=3){
			ans=1;
		}
		else{
			ans=ceil(log10(2*3.141592653589793*n)/2 + n*log10(n/2.7182818284590452353));
		}
		cout<<ans<<endl;
	}
	return 0;
}
