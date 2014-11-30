#include <iostream>
using namespace std;
 
 
int main() {
	unsigned long long n;
	cin>>n;
	while(n!=0){
		n++;
		cout<<n*(3*n-1)/2<<endl;
		cin>>n;
	}
	return 0;
}
