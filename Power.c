#include <stdio.h>
int main()
{
    int ba, ex;

    long long result = 1;

   
    scanf("%d", &ba);

    
    scanf("%d", &ex);

    while (ex != 0)
    {
        result *= ba;
        --ex;
    }

    printf("%lld", result);

    return 0;
}
