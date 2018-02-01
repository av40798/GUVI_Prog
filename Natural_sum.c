#include<stdio.h>
void main(){
	int n,sum=0;
	scanf("%d",&n);
	for (int i = 0; i <= n; ++i)
	{
		/* code */
		sum += i;
	}
	printf("%d",sum);
}
