#include <iostream>
using namespace std;
typedef long long ll;
 
int main() {
	ll t,n,i,k,a[100001];
	cin>>t;
	while(t--){
		k=0;
		cin>>n;
		for (i=0;i<n;i++){
			cin>>a[i];
			k=((k%n)+(a[i]%n))%n;
		}
		if (k%n==0){
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
 
	}
	return 0;
}
