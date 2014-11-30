#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	long double s,k,a,b,c,d;
	cin>>t;
	while(t--){
		k=1;
		s=0;
		cin>>a>>b>>c>>d;
		s= (double) (a+b+c+d)/2;
		k=(s-c)*(s-a)*(s-b)*(s-d);
		cout<<fixed<<setprecision(2)<<sqrt(k)<<endl;
	}
	return 0;
}
