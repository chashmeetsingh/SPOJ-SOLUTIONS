#include <bits/stdc++.h>
int main()
{
    int t,n,i,m,d,a[100001],c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&m,&d);
        c=0;

        for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                while((a[i]-=d)>0) {
                c++;
            }
            }

          if(c>=m) {
              printf("YES\n");
            }
          else{
            printf("NO\n");
            }
    }
    return 0;
}
