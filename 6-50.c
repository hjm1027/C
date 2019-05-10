#include <stdio.h>
int asd(int a,int b)
{
    if ((a>=0&&b>=0&&a>b)||(a<=0&&b<=0&&a<b)||(a>=0&&b<=0&&a>=(-b))||(a<=0&&b>=0&&(-a)>b))
	return 0;
    else
	return 1;
}
int main(void)
{
    int a,b; 
    while(scanf("%d",&a)!=EOF&&a!=0){
        int v[100];
	int i,c,d;
	for (i=0;i<a;i++){
	    scanf("%d",&v[i]);
	}
	for (d=0;d<a-1;d++){
	    for (i=0;i<a-1;i++){
	        if (asd(v[i],v[i+1])){
	            c=v[i];
		    v[i]=v[i+1];
		    v[i+1]=c;
	        }
            }
	}
	for (i=0;i<a-1;i++){
	    printf("%d ",v[i]);
	}
	printf("%d\n",v[i]);
    }
    return 0;
}
