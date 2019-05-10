#include <stdio.h>
int main(void)
{
	int a,b,i;
	int sum=0;
	int v[100];
    while (scanf("%d",&a)!=EOF){
	    for (i=0;i<a;i++){
		    scanf("%d",&b);
			v[i]=b;
			sum+=b;
		}
		int max=v[0];
		int min=v[0];
		for (i=1;i<a;i++){
		    if (max<v[i])
			    max=v[i];
			if (min>v[i])
			    min=v[i];
		}
		sum=sum-max-min;
		printf("%.2f\n",(double)sum/(a-2));
		sum=0;
	}
	return 0;
}

