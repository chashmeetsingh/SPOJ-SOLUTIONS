#include<iostream>
using namespace std;
int main()
{
 int a;
 while(cin>>a)
 {
  if(a==0)
   break;
  int sum;
  sum=(a*(a+1)*(2*a+1))/6;
  cout<<sum<<endl;;
 }
 return 0;
}
