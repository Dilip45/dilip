/*WAP to print 1 to n even numbers using do-while*/
#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
i=2;
do
{
	printf("%d\t",i);
	i=i+2;
}while(i<=n);
return 0;
}
