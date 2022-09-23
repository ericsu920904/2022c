#include <stdio.h>
int main()
{
    printf("請輸入1個數字:");
    int n;
    scanf("%d",&n);
    printf("用8除以%d\n",n%8);
    printf("用9除以%d\n",n%9);
    printf("用15除以%d\n",n%15);
}
