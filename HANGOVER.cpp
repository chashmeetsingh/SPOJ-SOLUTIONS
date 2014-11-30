#include <iostream>
using namespace std;
 
int main() {
	int c,i;
	long double n,k;
	cin>>n;
	while(n!=0.00){
		k=0;
		c=0;
		i=2.0;
		while(n>k){
			//cout<<"yes";
			k+=double(1.0/(i));
			c+=1;
			i+=1;
		}
		cout<<c<<" card(s)"<<endl;
		cin>>n;
	}
	return 0;
}
