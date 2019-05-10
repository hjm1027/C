#include <stdio.h>
int main(void){
	int n;
	int i=0;
    while(scanf("%d",&n)<1000){
	    while(n!=1){
		    if(n%2){
			    n=(3*n+1)/2;
				i+=1;
			}
			else{
			    n/=2;
				i+=1;
			}
		}
		printf("%d",i);
	}
	return 0;
}
