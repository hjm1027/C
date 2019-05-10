#include <stdio.h>
void judge(char str[],int len)
{
	int a=1,b=1,c=1,d=1,i=0,n=0;
	while (str[i]){
		if (str[i]>='A'&&str[i]<='Z'&&a==1){
		    n++;
			a=0;
		}
		if (str[i]>='a'&&str[i]<='z'&&b==1){
            n++;
            b=0;
        }
		if (str[i]>='0'&&str[i]<='9'&&c==1){
            n++;
            c=0;
        }
		if ((str[i]=='~'||str[i]=='!'||str[i]=='@'||str[i]=='#'||
			str[i]=='$'||str[i]=='%'||str[i]=='^')&&d==1){
		    n++;
			d=0;
		}
		i++;
	}
	if (len<8||len>16||n<3)
	    printf("NO\n");
	else
	    printf("YES\n");
}
int main(void)
{
	int m,len,i;
	scanf("%d",&m);
	while (m--){
		len=0;
		char str[51];
		scanf("%s",str);
		i=0;
		while(str[i++])
			len++;
	judge(str,len);
	}
	return 0;
}
