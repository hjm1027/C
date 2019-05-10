#include <stdio.h>
int sqr(int a)
{
    for(int i=2;i<=a;i++){
        if (i*i>=a)
	    return i;
    }
}
int sushu(int a)
{
    if (a==2||a==3||a==5)
        return 1;
    if (a==4)
	return 0;
    for (int i=2;i<=sqr(a);i++){
        if (a%i==0)
	    return 0;
    }
    return 1;
}
int main(void)
{
    int m,n,i,c;
    int line=0;
    scanf("%d %d",&m,&n);
    int s[10001];
    for (i=2,c=0;c<10001;i++){
        if (sushu(i)){
	    s[c]=i;
	    c++;}
    }
    for (c=m-1;c<n;c++){
        if (line!=9){
	    printf("%d ",s[c]);
	    line+=1;
	}
	else{
	    printf("%d\n",s[c]);
	    line=0;
	}
    }
    printf("%d",s[c]);
    return 0;
}
