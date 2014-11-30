#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	unsigned long long t,n,a[1001],b[1001],i,k;
	cin>>t;
	while(t--){
		k=0;
		cin>>n;
		for (i=0;i<n;i++){
			cin>>a[i];
		}
		for (i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		for (i=0;i<n;i++){
			k+=a[i]*b[i];
		}
		cout<<k<<endl;
	}
	return 0;
}
