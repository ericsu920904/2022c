#include <stdio.h>
#include<stdlib.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("%d",abs(x2-x1)*abs(y2-y1));
}
