#include <stdio.h>
int main()
{
    int n, rev = 0, re, ori;
    scanf("%d", &n);
    ori = n;
    while( n!=0 )
    {
        re = n%10;
        rev = rev*10 + re;
        n /= 10;
    }

    if (ori == rev)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}
