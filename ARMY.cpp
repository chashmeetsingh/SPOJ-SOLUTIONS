#include <iostream>
using namespace std;
 
int main() {
	long long int t,i,g,m,j,k,a[100],b[100];
	cin>>t;
	while(t--)
	{
		cin>>g>>m;
		for(i=0;i<g;i++)
		{
			a[i]=0;
		}
		for(i=0;i<g;i++)
		{
			b[i]=0;
		}
		for(i=0;i<g;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<m;i++)
		{
			cin>>b[i];
		}
		j=0;
		k=0;
		while(j!=g && k!= m)
		{
 
			if(a[j]>=b[k])
			{
				k++;
			}
			else
			{
				j++;
			}
 
		}
 
		if(j==g)
		{
			cout<<"MechaGodzilla"<<endl;
		}
		else if(k==m)
		{
			cout<<"Godzilla"<<endl;
		}
 
	}
	return 0;
}
