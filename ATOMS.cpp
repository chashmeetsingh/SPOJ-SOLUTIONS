#include <iostream>
typedef unsigned long long ll;
using namespace std;
 
int main() {
	ll t,n,k,m,d,c;
	cin>>t;
	while(t--){
		c=0;
		cin>>n>>k>>m;
		d=n;
        while(1)
        {
            if((double)d *(double) k>(double)m)break;
            d=d * k;
            c++;
        }
        cout << c << endl;
 
}return 0;
}
