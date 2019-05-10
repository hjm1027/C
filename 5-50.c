#include <stdio.h>
int sushu(int a)
{
    int i;
    for (i=2;i<a;i++){
        if (a%i==0){
	    return 0;
	}
    }
    return 1;
}
int main(void)
{
    int n;
    int i=0;
    puts("1-100间的素数有：");
    for (n=2;n<=100;n++){
        if(sushu(n)){
	    printf("%3d",n);
	    i++;
	}
	if(i%5==0&&i!=0){
	    puts("");
	    i=0;}
    }
    return 0;
}
