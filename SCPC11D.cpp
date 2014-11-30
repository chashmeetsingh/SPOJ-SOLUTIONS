#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int a[3],i;
	while(!cin.eof()){
		for(i=0;i<3;i++){
			cin>>a[i];
		}
		if(a[0]==0)	continue;
		sort(a,a+3);
		if((a[0]*a[0]+a[1]*a[1])==a[2]*a[2]){
			cout<<"right"<<endl;
		}
		else	cout<<"wrong"<<endl;
	}
	return 0;
}
