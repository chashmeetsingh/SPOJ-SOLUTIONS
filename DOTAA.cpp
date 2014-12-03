#include <bits/stdc++.h>
int main()
{
    int t,n,i,m,d,h[100001],c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&m,&d);
        c=0;

        for(i=0;i<n;i++)
            {
                scanf("%d",&h[i]);
                while((h[i]-=d)>0) {
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
