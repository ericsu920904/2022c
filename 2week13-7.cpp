#include <stdio.h>
int main()
{
	int a[20],n,c=0;
	for(int i=0;i<=10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0)break;
	}
	scanf("%d",&n);
	for(int i=0;i<=10;i++){
		if(a[i]==n)c++;
	}
	printf("%d\n",c);
}
