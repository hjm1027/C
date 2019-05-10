#include <stdio.h>
int main(void)
{
	int n,i,c,d;
	int v[101];
    while(scanf("%d",&n)!=EOF&&n!=0){
	    for(i=0;i<n;i++){
		    scanf("%d",&v[i]);
		}
		int temp=v[0];
		c=0;
		for(i=0;i<n;i++){
		    if (v[i]<temp){
			    temp=v[i];
				c=i;
		    }
		}
        d=v[0];
		v[0]=temp;
		v[c]=d;
		for(i=0;i<n-1;i++){
		    printf("%d ",v[i]);
		}
		printf("%d\n",v[i]);
	}
	return 0;
}
