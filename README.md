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
## step01-4
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	
	for(int n=2;n<=a;n++){
		int bad=0;
		for(int i=2;i<n;i++){
		if (n%i==0) bad=1;
	}
	if(bad==0)printf("%d ",n);
	}
}
```
# Week10
```
## step01
```cpp
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};

    printf("a[0]:%d\n",a[0]);
    printf("a[1]:%d\n",a[1]);
    printf("a[2]:%d\n",a[2]);
    printf("a[3]:%d\n",a[3]);
}
```
## step02
```cpp
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    for(int i=3;i>=0;i--){
        printf("a[%d]:%d\n",i,a[i]);
    }
}
```
# Week11
```
## step01
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80;
    printf("a:%d b:%d\n",a,b);

    int temp=a;
    a=b;
    b=temp;

    printf("a:%d b:%d",a,b);

}
```
## step02
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80,c=70;
    if(a>b){
    int temp=a;
    a=b;
    b=temp;
    }
    if(b>c){
    int temp=b;
    b=c;
    c=temp;
    }
    if(a>b){
    int temp=a;
    a=b;
    b=temp;
    }
    printf("a:%d b:%d c:%d",a,b,c);
}
```
## step03
```cpp
#include <stdio.h>

int a[10]= {90,80,70,60,50,40,30,20,10,0};
int main()
{
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\n");

    for(int i=0; i<10-1; i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    ("\n");
}
```
# Week12
```
## step01
```cpp

#include <stdio.h>
int a[5]={5,4,3,2,1};
int main()
{
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}
```
## step02
```cpp
#include <stdio.h>
int main()
{
    int a;
    int b=10;
    int c[3];
    int d[3]={10,20,30};
    int g[2][3];
    int h[2][3]{10,20,30},{40,50,60};
}
```
## step03
```cpp
#include <stdio.h>
int main()
{
    int a[2][3]={{10,20,30} ,  {40,50,60}};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
## step04
```cpp
#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int n;
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                printf("%3d",c[i][j]);
        }
        printf("\n");
    }
}
```
## step05
```cpp
#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int n;
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
            c[i][j]+=a[i][k]*b[i][k];
            }
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                printf("%3d",c[i][j]);
        }
        printf("\n");
    }
}
```
# Week15
```
## step1
```cpp
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    char line[]="Hello World";

    printf("整數 %d\n",100);
    printf("浮點數 %f\n",3.141592653589793238462643383279);
    printf("%s 字串\n",line);
}
```
## step02
```cpp
#include <stdio.h>
int main()
{
    printf("%c : %d\n",65,65);
    printf("%c : %d\n",66,66);
    printf("%c : %d\n",67,67);
    printf("%c : %d\n",'A','A');
    printf("%c : %d\n",'B','B');
    printf("%c : %d\n",'C','C');
    printf("上面用到數字64及單引號'a'的結果都一樣\n");
    printf("%c : %d\n",97,97);
    printf("%c : %d\n",'a','a');
}
```
## step03
```cpp
#include <stdio.h>
int main()
{
    printf("=%c=%d=\n",65,65);
    printf("=%c=%d=\n",'+','+');
    printf("=%c=%d=\n",'\n','\n');
    printf("=%c=%d=\n",'\t','\t');
    printf("=%c=%d=\n",'\0','\0');

    char line[]="Hello World AAA";

    for(int i=0;   ;i++){
        char c = line[i];
        if(c==0)break;
        printf("=%c",c);
    }
}
```
## step04
```cpp
#include <stdio.h>
int main()
{
    printf("=%c=%d=\n",65,65);
    printf("=%c=%d=\n",'+','+');
    printf("=%c=%d=\n",'\n','\n');
    printf("=%c=%d=\n",'\t','\t');
    printf("=%c=%d=\n",'\0','\0');

    char line[]="Hello World AAA";

    for(int i=0;   ;i++){
        char c = line[i];
        if(c==0)break;
        printf("=%c",c);
    }
}
```
# Week16
```
## step 01
```cpp
#include <stdio.h>
int main()
{
    char line[300];
    char*p=line;

    int n=10;
    int *p2=&n;

    float f=3.1415926;
    float*p3=&f;

    char c='A';
    char*p4=&c;
}
```
## step 02
```cpp
#include <stdio.h>
int main()
{
    char line[20]="Hello";
    int N= strlen(line);

    printf("Hello字串的長度:%d\n",N);

    char line2[20];
    strcpy(line2,line);
    printf("line2得到:%s\n",line2);

    printf("比較字串strcmp(line,line2得到%d\n",strcmp(line,line2));
}
```
