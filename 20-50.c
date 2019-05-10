#include <stdio.h>
int main(void)
{
    int m,i;
    int v[1001];
    scanf("%d",&m);
    for (i=0;i<m;i++){
        scanf("%d",&v[i]);
    }
    double sum=0;
    for (i=0;i<m;i++){
        for (int a=1;a<=v[i];a++){
            if (a%2)
	        sum+=(double)1/a;
	    else
		sum-=(double)1/a; 
	}
	printf("%.2f\n",sum);
	sum=0;
    }
    return 0;
}
