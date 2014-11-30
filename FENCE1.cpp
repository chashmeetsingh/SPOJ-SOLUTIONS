#include <iostream>
#include<cmath>
#include<cstdio>
#include <iomanip>
using namespace std;
 
int main() {
	long double n,z;
	cin>>n;
	while(n!=0){
		z=pow(n,2)*0.15915494309;
		cout<<setprecision(2)<<fixed<<z<<endl;
		cin>>n;
	}
	return 0;
}
