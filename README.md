# 2022c
資傳一甲的程式倉庫
# Week01
# Week02
# Week06
## step01-1
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int star=i*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```
## step01-2
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int space=5-i;
        int star=i*2-1;
        for(int k=0; k<space; k++)
            printf(" ");
        for(int k=0; k<star; k++)
        {
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```
## step01-3
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數:");
    int a, b, ans;
    scanf("%d %d",&a,&b);

    for(int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
            ans=i;
    }
    printf("找到ans:%d",ans);
}
```
## step01-4
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數:");
    int a,b,c;
    scanf("%d %d",&a,&b);

    while(1)
    {
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if (c==0)
            break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
## step01-5
```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999)
        printf("-999成立\n");
    if(-3)
        printf("-3成立\n");
    if(-2)
        printf("-2成立\n");
    if(-1)
        printf("-1成立\n");
    if(0)
        printf("0不成立,所以甚麼都沒印\n");
    if(1)
        printf("1成立\n");
    if(2)
        printf("2成立\n");
    if(3)
        printf("3成立\n");
    if(999)
        printf("999成立\n");
    if("a==0")
        printf("不管甚麼東西,幾乎都成立\n");
}
```
# Week07
## step01-6
```cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n",n);


    long long int a=1234567812345678;
    printf("%lld\n",a);
}
```
## step01-7
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);

    long long int ans;

    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("答案是:%lld\n",ans);
}
```
## step01-8
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);

    while(1){
        c=a%b;
        printf("%lld %lld %lld",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```
## step01-9
```cpp
#include <stdio.h>
int main()
{
    int n=1234;

    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
        }
}

```
# Week08
## step01-1
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            if(k<= n-i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}
```
## step01-2
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n)
        {
            if (k<=n-i)
                printf(" ");
            else
                printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}

```
## step01-3
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數是不是質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            bad=1;
    }
    if(bad==0)
        printf("%d是質數",n);
    else
        printf("%d不是質數",n);
}
```
