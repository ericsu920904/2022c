#include <stdio.h>
int main()
{
    for(int n=1; n<1000;n++){
    if( n%8==6 && n%9==7 && n%15==13){
        printf("現在的數字是:%d\n",n);
        printf("用8除以%d\n",n%8);
        printf("用9除以%d\n",n%9);
        printf("用15除以%d\n",n%15);
        }
    }
}
