#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
int main() {
	ll t,i;
	char s1[10001];
	stack<char> s;
	cin>>t;
	while(t--){
		cin>>s1;
		for(i=0;i<strlen(s1);i++){
			if(isalpha(s1[i])){
				cout<<s1[i];
			}
			else if(s1[i]==')'){
				cout<<s.top();
				s.pop();
			}
			else if (s1[i] != '(' ){
                s.push (s1[i]);
			}
		}cout<<endl;
	}
	return 0;
}
