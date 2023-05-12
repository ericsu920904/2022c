#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<10000)printf("%d",n/1000);
	else printf("%d",n/1000%10);

}

