#include <stdio.h>
int main(void)
{
    double a,b,c;
    printf("请输入3个实数。\n"); scanf("%lf",&a);
    scanf("%lf",&b); scanf("%lf",&c);
    if (a==b&&b==c)
        puts("1");
    else{
        if (a==b||b==c||a==c){
	    puts("2");}
	    else{
	        if (a+b>c&&a+c>b&&b+c>a)
		    puts("3");
		else puts("0");}
    }
    return 0;    
}
