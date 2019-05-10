#include <stdio.h>
int judge(int v[],int x,int a)
{
	int i=0;
	for (int i=0;i<x;i++){
	    if (v[i]==a)
		    return 0;
	}
	return 1;
}
int main(void)
{
    int n;
	int i=0;
	int j=0;
	int v[10]={0},f[10]={0};
	int sum=0;
	while (scanf("%d",&n)!=EOF){
		int N=0;
	    for (i=0;i<n;i++){
		    scanf("%d",&v[i]);
		}
		f[0]=v[0];N++;
		for (i=1;i<n;i++){
		    if (judge(v,i,v[i])){
			    f[N]=v[i];
				N++;
			}
		}
		for (i=0;i<N;i++){
		    for (j=0;j<N;j++){
				sum=sum+f[i]*10+f[j];		
			}
			sum-=(f[i]*10+f[i]);
		}
		printf("%d",sum);
	}
	return 0;
}
