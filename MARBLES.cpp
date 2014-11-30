#include <iostream>
#include <algorithm>
typedef unsigned long long ll;
using namespace std;
 
long long C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;
 
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
 
    return ans;
}
 
int main() {
	ll t,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		x--;y--;
		cout<<C(x,y)<<endl;
	}
	return 0;
}
