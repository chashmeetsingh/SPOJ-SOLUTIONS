#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
 
int main() {
	ll t,n,k,a[1000001],i,c,z,g;
	cin>>t;
	g=1;
	while(t--){
		cin>>n>>k;
		for(i=0;i<k;i++){
			cin>>a[i];
		}
		sort(a,a+k);
		reverse(a,a+k);
		i=0;
		c=1;
		z=0;
		do{
			z+=a[i];
			if (z<n){
				i+=1;
			}
			else{
				break;
			}
			c++;
		}while (c<=k);
		if(z>=n){
			cout<<"Scenario #"<<g<<":"<<endl<<c<<endl<<endl;
		}
		else{
			cout<<"Scenario #"<<g<<":"<<endl<<"impossible"<<endl<<endl;
		}g++;
	}
	return 0;
}
