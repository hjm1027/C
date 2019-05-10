#include <stdio.h>
int main(void)
{
    int c1,c2,h,m,s;
    double sum=0;
    scanf("%d",&c1);scanf("%d",&c2);
    sum=(double)(c2-c1)/100;
    h=(double)sum/3600;
    s=sum;
    m=(s%3600)/60;
    sum=sum-3600*h-60*m;
    s=sum;
    sum=sum-s;
    if (sum>=0.5)
	s=s+1;
    if (h<10)
	printf("0%d:",h);
    else
	printf("%d:",h);
    if (m<10)
	printf("0%d:",m);
    else
	printf("%d:",m);
    if (s<10)
	printf("0%d",s);
    else
	printf("%d",s);
    return 0;
}
