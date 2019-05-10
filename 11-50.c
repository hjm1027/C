#include <stdio.h>
int main(void)
{
    int n,m,i,j,biao;
	int v[100010];
	int c;
	int d=0;
	while(scanf("%d%d",&n,&m)!=EOF){
	    for(i=0;i<n;i++)
		    scanf("%d",&v[i]);
		for (i=0;i<n-1;i++){
			if (biao=0){break;}
			biao=0;
		    for(j=0;j<n-1;j++){
		        if (v[j]<v[j+1]){
			        c=v[j];
				    v[j]=v[j+1];
				    v[j+1]=c;
					biao=1;
			    }
		    }
		}
		if (n<m)
		    m=n;
		    for(i=0;i<m-1;i++){
			    printf("%d ",v[i]);
			}
			printf("%d\n",v[i]);
		}
	return 0;
}
