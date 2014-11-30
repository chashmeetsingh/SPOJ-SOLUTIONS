#include <bits/stdc++.h>
using namespace std;
 
int main() {
	unsigned long long t,n,i,j,c,a[10001];
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
 
		c=0;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if (a[i]==0){
					break;
				}
				else if(a[j]==2*a[i]){
					c++;
					a[j]=0;
		//			a[i]=0;
					break;
				}
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
