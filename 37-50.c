#include <stdio.h>
int main(void)
{
	char str[1000][15];
	int a[1000];
	int b[1000];
	int n,i,m,temp,i2,f;
	int fin[1000];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s",str[i][]);
		scanf("%d %d",&a[i],&b[i]);
	}
	scanf("%d",&m);f=0;
	for (i=0;i<m;i++){
		scanf("%d",&temp);
		for (i2=0;i2<n;i2++){
			if (temp==a[i2]){
				fin[f]=i2;
				f++;
			}
		}
	}
	for (i=0;i<m;i++){int d=0;
		while(str[fin[i][d]]){putchar(str[fin[i][d]]);d++;}
		printf(" %d",b[fin[i]]);
	}
	return 0;
}
