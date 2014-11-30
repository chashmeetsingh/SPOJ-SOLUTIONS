#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	unsigned long long t,z,c,dc,x,y;
	cin>>t;
	while(t--){
		cin>>z;
		c=floor(sqrt(2*z)-0.5);
		dc=c*(c+1)/2;
		y=z-dc;
		x=c-y+2;
		if((x+y)%2!=0){
			cout<<"TERM "<<z<<" IS "<<y<<"/"<<x<<endl;
		}
		else{
			cout<<"TERM "<<z<<" IS "<<x<<"/"<<y<<endl;
		}
	}
	return 0;
}
