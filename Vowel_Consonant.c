#include <stdio.h>
void main()
{
    char c;
    int Lowercase, Uppercase;
    scanf("%c",&c);
    Lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    Uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');


    if (Lowercase || Uppercase)
        printf("Vowel\n");
    else
        printf("Consonant");
}
