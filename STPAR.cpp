#include <bits/stdc++.h>
 
using namespace std;
 
int n,a[1001];
stack<int> s;
bool b;
 
int main() {
    
    while (cin>>n){
        if (n==0) break;
        while (!s.empty()) s.pop();
        for(int i=1; i<=n; i++) cin >> a[i];
        int c=1;
        int i=1;
        b=false;
        while (c<=n && i<=n){
            if (!s.empty()){
                while (!s.empty() && s.top()==c) {
                    s.pop();
                    c++;
                    }
                }
                while (i<=n && a[i]!=c){
                    s.push(a[i]);
                    i++;
                }
                if (i<=n) {
                        i++;
                        c++;
                }
                else
                if (!s.empty() && s.top()!=c) {
                    b=true;
                }
            }
 
        if (b) cout << "no";
        else
            cout << "yes";
        cout << endl;
        }
 
}
 
