#include <stdio.h>
int main(void)
{
    long a,b;
	int n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    scanf("%ld%ld",&a,&b);
		if (a%b==0)
		    printf("YES");
		else
		    printf("NO");
		puts("");
	}
}
