#include <stdio.h>
int judge(int a,int b,int c)
{
	if (a>2014||(a==2014&&b>9)||(a==2014&&b==9&&c>6))
	    return 0;
	if (a<1814||(a==1814&&b<9)||(a==1814&&b==9&&c<6))
	    return 0;
	if (b<1||b>12||c<1||c>31)
	    return 0;
	return 1;
}
int judgemax(int a,int b,int c,int d,int e,int f)
{
	if ((a>d)||((a==d)&&(b>e))||((a==d)&&(b==e)&&(c>f)))
	    return 1;
	else
	    return 0;
}
int judgemin(int a,int b,int c,int d,int e,int f)
{
    if ((a<d)||((a==d)&&(b<e))||((a==d)&&(b==e)&&(c<f)))
        return 1;
    else
        return 0;
}
int main(void)
{
	int N,maxa=0,maxb=0,maxc=0,mina=0,minb=0,minc=0,a,b,c;
	int n=0;
	scanf("%d",&N);int N1=N;
	char max[6],min[6],ch[6];
	while(N--){
		scanf("%s",ch);
		scanf("%d/%d/%d",&a,&b,&c);
		if (N+1==N1){
			maxa=mina=a;maxb=minb=b;maxc=minc=c;
			int i=6;
			while(i--){
				max[i]=min[i]=ch[i];
			}
		}
		if (judge(a,b,c)){
			n++;
			if (judgemax(a,b,c,maxa,maxb,maxc)){
				maxa=a;maxb=b;maxc=c;
				int i=6;
				while(i--)
				    max[i]=ch[i];
			}
			if (judgemin(a,b,c,mina,minb,minc)){
				mina=a;minb=b;minc=c;
                int i=6;
                while(i--)
                    min[i]=ch[i];
            }
		}
	}
		if (n!=0){
		printf("%d ",n);int i=0;
		while (min[i]){
		    putchar(min[i]);
			i++;
		}
		i=0;printf(" ");
		while (max[i]){
		    putchar(max[i]);
			i++;
		}
		puts("");}
		else{
		    printf("%d\n",0);
		}return 0;
}
