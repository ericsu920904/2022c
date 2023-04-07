#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int a1[10]={9,5,1,3,7,8,4,6,2,0};
    vector<int> a2(a1,a1+10);

    for(int i=0;i<10;i++){
        printf("%d ",a2[i]);
    }
}

