#include <iostream>
using namespace std;
 
int main() {
	long long t,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		if(x<=y){
			if(x%2==0)	cout<<"L"<<endl;
			else	cout<<"R"<<endl;
		}
		else if(x > y)
        {
            if(y%2==0)	cout<<"U"<<endl;
            else if(y%2==1) cout<<"D"<<endl;
        }
	}
	return 0;
}
