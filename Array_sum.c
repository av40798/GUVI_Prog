#include<stdio.h>

int main() {
   int i, arr[50], sum, N,K;

 
   scanf("%d", &N);
   
   scanf("%d",&K);

 
   for (i = 0; i < N; i++)
      scanf("%d", &arr[i]);

 
   sum = 0;
   for (i = 0; i < K; i++)
      sum = sum + arr[i];


   
   printf("%d", sum);

   return (0);
}
