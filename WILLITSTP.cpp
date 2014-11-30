#include <iostream>
using namespace std;
typedef unsigned long long ll;
bool isPowerOfTwo(ll n)
{
  if (n == 0)
    return 0;
  while (n != 1)
  {
    if (n%2 != 0)
      return 0;
    n = n/2;
  }
  return 1;
}
 
int main() {
	ll n;
	cin>>n;
	isPowerOfTwo(n)? cout<<"TAK"<<endl:cout<<"NIE"<<endl;//("Yes\n"): printf("No\n");
	return 0;
}
