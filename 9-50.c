#include <stdio.h>
int main(void)
{
    int a,b,c,i;
	int sum=0;
	while(scanf("%d/%d/%d",&a,&b,&c)!=EOF){
	for (i=1;i<=b;i++){
	    if (i<b&&(i==1||i==3||i==5||i==7||i==8||i==10||i==12))
		    sum+=31;
		if (i<b&&(i==4||i==6||i==9||i==11))
		    sum+=30;
		if (i<b&&i==2){
		    if (a%400==0)
			    sum+=29;
			else{
			    if (a%4==0&&a%100!=0)
			        sum+=29;
			    else
			        sum+=28;
			}
		}
	}
	sum+=c;
	printf("%d\n",sum);
	sum=0;
	}
	return 0;
}
