#include <iostream>
using namespace std;
 
int main() {
	long long t,k=0,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		if (x==y){
			if (x%2==0){
				cout<<x+y<<endl;
			}
			else{
				cout<<x+y-1<<endl;
			}
		}
		else if (x-2==y){
			if (x%2==0){
				cout<<x+y<<endl;
			}
			else{
				cout<<x+y-1<<endl;
			}
		}
		else{
			cout<<"No Number"<<endl;
		}
	}
	return 0;
}
