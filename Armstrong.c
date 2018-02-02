#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("Yes");
    else
        printf("No");

    return 0;
}
