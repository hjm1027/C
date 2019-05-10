#include <stdio.h>
int main(void)
{
    int t,m,n,x,y,i,j;
    int v[1010][1010];
    scanf("%d",&t);
    for (i=0;i<t;i++){
	int sum=0;
        scanf("%d %d %d %d",&m,&n,&x,&y);
        for (j=0;j<m;j++){
	    for (i=0;i<n;i++){
		scanf("%d",&v[j][i]);
	    }
	}
	int ii,jj;
	for (j=0;j<=m-y;j++){
	    for (i=0;i<=n-x;i++){
		int zs=0;
	        for (jj=0;jj<y;jj++){
		    for (ii=0;ii<x;ii++){
		        zs+=v[j+jj][i+ii];
		    }
		}
		if (sum<zs)
		    sum=zs;
	    }
	}
	printf("%d\n",sum);
	sum=0;
    }
    return 0;
}
