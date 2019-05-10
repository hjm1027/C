#include <stdio.h>
int zhan(int a,int b)
{
    while (a!=b){
        if (a>b)
	    a-=b;
	else
	    b-=a;
    }
    return a;
}
int main(void)
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d",&a);scanf("%d",&b);
    printf("这两个数的最大公约数为%d。\n",zhan(a,b));
    return 0;
}
