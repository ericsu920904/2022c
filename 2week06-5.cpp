#include <stdio.h>
#include <algorithm>
int a[10] = {6,2,3,4,9,8,5,7,1,0};
int main()
{
    std::sort(a,a+10);

    for(int i=0;i<10;i++){
            printf("%d",a[i]);
    }
}
