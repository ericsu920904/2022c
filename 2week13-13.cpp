#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int l;
	if(n%400==0)l=1;
	else if(n%100==0)l=0;
	else if(n%4==0)l=1;
	else l=0;

	if(l==1)printf("%d is a leap year.\n",n);
	else printf("%d is not a leap year.\n",n);
}
