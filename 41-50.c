#include <stdio.h>
int main(void)
{
	int tot[26]={0};
	char str[1000];
	scanf("%[^\n]",str);
	int i=0;int sum;
	while(str[i]!=0){
		if (str[i]=='a'||str[i]=='A')
		    tot[0]++;
	    if (str[i]=='b'||str[i]=='B')
            tot[1]++;
        if (str[i]=='c'||str[i]=='C')
            tot[2]++;
        if (str[i]=='d'||str[i]=='D')
            tot[3]++;
        if (str[i]=='e'||str[i]=='E')
            tot[4]++;
        if (str[i]=='f'||str[i]=='F')
            tot[5]++;
        if (str[i]=='g'||str[i]=='G')
            tot[6]++;
        if (str[i]=='h'||str[i]=='H')
            tot[7]++;
        if (str[i]=='i'||str[i]=='I')
            tot[8]++;
        if (str[i]=='j'||str[i]=='J')
            tot[9]++;
        if (str[i]=='k'||str[i]=='K')
            tot[10]++;
        if (str[i]=='l'||str[i]=='L')
            tot[11]++;
        if (str[i]=='m'||str[i]=='M')
            tot[12]++;
        if (str[i]=='n'||str[i]=='N')
            tot[13]++;
        if (str[i]=='o'||str[i]=='O')
            tot[14]++;
        if (str[i]=='p'||str[i]=='P')
            tot[15]++;
		if (str[i]=='q'||str[i]=='Q')
            tot[16]++;
        if (str[i]=='r'||str[i]=='R')
            tot[17]++;
        if (str[i]=='s'||str[i]=='S')
            tot[18]++;
        if (str[i]=='t'||str[i]=='T')
            tot[19]++;
        if (str[i]=='u'||str[i]=='U')
            tot[20]++;
        if (str[i]=='v'||str[i]=='V')
            tot[21]++;
        if (str[i]=='w'||str[i]=='W')
            tot[22]++;
        if (str[i]=='x'||str[i]=='X')
            tot[23]++;
        if (str[i]=='y'||str[i]=='Y')
            tot[24]++;
		if (str[i]=='z'||str[i]=='Z')
		    tot[25]++;
		i++;
	}
	sum=0;int I;
	for (i=0;i<26;i++){
		if (tot[i]>sum){I=i;
			sum=tot[i];}
	}
	if (I==0) printf("a ");
	if (I==1) printf("b ");
	if (I==2) printf("c ");
    if (I==3) printf("d ");
	if (I==4) printf("e ");
    if (I==5) printf("f ");
	if (I==6) printf("g ");
    if (I==7) printf("h ");
	if (I==8) printf("i ");
    if (I==9) printf("j ");
    if (I==10) printf("k ");
    if (I==11) printf("l ");
    if (I==12) printf("m ");
    if (I==13) printf("n ");
    if (I==14) printf("o ");
    if (I==15) printf("p ");
	if (I==16) printf("q ");
    if (I==17) printf("r ");
    if (I==18) printf("s ");
    if (I==19) printf("t ");
    if (I==20) printf("u ");
    if (I==21) printf("v ");
    if (I==22) printf("w ");
    if (I==23) printf("x ");
    if (I==24) printf("y ");
    if (I==25) printf("z ");
	printf("%d\n",sum);
	return 0;
}
