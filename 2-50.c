#include <stdio.h>
int main(void)
{
    int a,b;
    printf("请输入两门课的成绩：");scanf("%d",&a);
    scanf("%d",&b);
    if (a>=0&&a<=100&&b>=0&&b<=100){
        switch (a>=60&&b>=60){
		case 1:puts("it is pass"); break;
		case 0:puts("it is no pass"); break;
	}
    }
    else puts("it is error");
    return 0;
}
