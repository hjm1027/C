#include <stdio.h>
int main(void)
{
    int n,i;
	long a[11],b[11],c[11];
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    scanf("%ld",&a[i]);
		scanf("%ld",&b[i]);
		scanf("%ld",&c[i]);}
	for (i=0;i<n;i++){
		if (a[i]+b[i]>c[i]){
		    printf("Case #%d: true\n",i+1);}
		else
		    printf("Case #%d: false\n",i+1);
	}
	return 0;
}
