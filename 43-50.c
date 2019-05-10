#include <stdio.h>
void pit(int t)
{
    if (t/100>0)
        printf("%d",t);
    else if (t/10>0)
        printf("0%d",t);
    else
        printf("00%d",t);
}
int main(void)
{
    int m,n,a,b,t;
    int x=0,y=0;
    int v[500][500];
    scanf("%d%d%d%d%d",&m,&n,&a,&b,&t);
    for (;y<m;y++){
        for (x=0;x<n;x++){
            scanf("%d",&v[y][x]);
            if (v[y][x]>=a&&v[y][x]<=b)
                v[y][x]=t;
        }
    }
    for (y=0;y<m;y++){
        for (x=0;x<n-1;x++){
            pit(v[y][x]);printf(" ");
        }
        pit(v[y][x]);puts("");
    }
    return 0;
}

