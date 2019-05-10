#include <stdio.h>
int main(void)
{
	int i=1;
    int a;
    int h,t,n;  /*百，十，个*/
    scanf("%d",&a);
    h=a/100;
    t=(a-h*100)/10;
    n=a%10;
    while(h--)
        printf("B");
    while(t--)
        printf("S");
    for (i=1;i<=n;i++)
        printf("%d",i);
    puts("");
}

