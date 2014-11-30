#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <stack>
 
using namespace std;
 
int n,a[1001];
stack<int> s;
bool nores;
 
int main() {
    //freopen("test.in","r",stdin);
    while (cin>>n){
        if (n==0) break;
        while (!s.empty()) s.pop();
        for(int i=1; i<=n; i++) cin >> a[i];
        int current=1;
        int i=1;
        nores=false;
        while (current<=n && i<=n){
            if (!s.empty()){
                while (!s.empty() && s.top()==current) {
                    s.pop();
                    current++;
                    }
                }
                while (i<=n && a[i]!=current){
                    s.push(a[i]);
                    i++;
                }
                if (i<=n) {
                        i++;
                        current++;
                }
                else
                if (!s.empty() && s.top()!=current) {
                    nores=true;
                }
            }
 
        if (nores) cout << "no";
        else
            cout << "yes";
        cout << endl;
        }
 
}
 
