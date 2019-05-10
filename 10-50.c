#include <stdio.h>
int main(void)
{
	int n,m,x,y,z;
	int i=0;
	int p[5];
	int sum=0;
    int v[50][5];
	scanf("%d%d",&n,&m);
	for (y=0;y<n;y++){
	    for (x=0;x<m;x++){
		    scanf("%d",&v[y][x]);
		}
	}
    for (y=0;y<n-1;y++){
	    for (x=0;x<m;x++){
			sum+=v[y][x];}
		printf("%.2f ",(double)sum/m);
	    sum=0;
		for (x=0,y++;x<m;x++){
		    sum+=v[y][x];}
	    printf("%.2f\n",(double)sum/m);
		sum=0;
	}/*第一行*/
    for (x=0,sum=0;x<m-1;x++){
	    for (y=0;y<n;y++){
		    sum+=v[y][x];
		}
		printf("%.2f ",(double)sum/n);
		p[x]=sum/n;sum=0;
	}
    for (sum=0,x++,y=0;y<n;y++){
	    sum+=v[y][x];
	}
    printf("%.2f\n",(double)sum/n);
	p[x]=sum/n;
	sum=0;/*第二行*/
	for (y=0,z=0;y<n;y++){
	    for (x=0;x<m;x++){
		    if (v[y][x]<p[x]){
			    x++;
			    continue;}
			z+=1;
        }
	}
    printf("%d\n\n",z);
	return 0;
}
