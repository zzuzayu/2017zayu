#include <bits/stdc++.h>

using namespace std;

long long zhuheshu(int m,int n)
{
    if(n==0||m==n)return 1;
    if(n>m/2)n=m-n;
    long long fm=1,fz=1;
    for(int i=m;i>m-n;i--)
    {
        fm*=i;
    }
    for(int j=1;j<=n;j++)
    {
        fz*=j;
    }
    return (fm/fz);
}
int zdgys(int a,int b)
{
    int y=a%b;
    while(y)
    {
        a=b;
        b=y;
        y=a%b;
    }
    return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,k,a,b;
        int up,down;
        scanf("%d%d%d%d%d",&m,&n,&k,&a,&b);
        if(k>=m+n)
        {
            if(a==m&&b==n)printf("1 1\n");
            else printf("0 1\n");
        }
        else
        {
            if(a+b!=k)printf("0 1\n");
            else if(a>m||b>n)printf("0 1\n");
            else
            {
                up=zhuheshu(m,a)*zhuheshu(n,b);
                down=zhuheshu(m+n,k);
                printf("%d %d\n",up/zdgys(up,down),down/zdgys(up,down));
            }
        }

    }
    return 0;
}

