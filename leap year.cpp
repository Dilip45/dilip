#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0&&n%100!=0)
	printf("lear year");
	else
	printf("not a leap year");
	return 0;
}
