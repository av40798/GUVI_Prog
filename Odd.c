#include <stdio.h>

int main()
{
    int i, n,q;
    
    scanf("%d",&q);
    scanf("%d", &n);
    
    for(i=q; i<=n; i++)
    {
        
        if(i%2!=0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
