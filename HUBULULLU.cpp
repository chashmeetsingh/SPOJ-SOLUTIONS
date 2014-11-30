#include <iostream>
using namespace std;
typedef unsigned long long ll;
 
int main() {
	ll n,t,a;
	cin>>t;
	while(t--){
		cin>>n>>a;
		if (a==0){
			cout<<"Airborne wins."<<endl;
		}
		else {
			cout<<"Pagfloyd wins."<<endl;
		}
 
	}
	return 0;
}
