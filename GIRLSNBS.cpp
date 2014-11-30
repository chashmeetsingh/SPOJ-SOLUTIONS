#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long g,b;
	cin>>g>>b;
	while(g!=-1){
		if(g>b){
			cout<<ceil((double)g/(b+1))<<endl;
		}
		else{
			cout<<ceil((double)b/(g+1))<<endl;
		}
		cin>>g>>b;
	}
	return 0;
}
