#include<stdio.h>
void main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a > b && a > c)
	{
		/* code */
		printf("%d\n",a);
	}
	if (b > a && b > c)
	{
		/* code */
		printf("%d\n", b);
	}
	if(c > a && c > b){
		printf("%d\n", c);
	}
}
