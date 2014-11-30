#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;
typedef unsigned long long ll;
int main() {
	ll n,a[100001],k,i,b[100001];
	cin>>n;
	while(n!=0){
		k=0;
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++){
			scanf("%lld",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n);
		reverse(b,b+n);
		for(i=0;i<n;i++){
			k+=a[i]*b[i];
		}
		printf("%lld\n",k);
		cin>>n;
	}
	return 0;
}
