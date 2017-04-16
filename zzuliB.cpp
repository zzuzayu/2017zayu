#include <bits/stdc++.h>

using namespace std;
/*int incode(char a)
{
    if(a>=48&&a<=57)return a+4;
    if(a>=65&&a<=90)return a-65;
    if(a>=97&&a<=122)return a-71;
    if(a=='+')return 62;
    if(a=='/')return 63;
}
int outcode(int a,int b,int c,int d)
{
    int x[24];
    int i;
    memset(x,0,sizeof(x));
    for(i=5;i>=0;i--)
    {
        x[i]=a%2;
        a/=2;
    }
    for(i=11;i>=6;i--)
    {
        x[i]=b%2;
        b/=2;
    }
    for(i=17;i>=12;i--)
    {
        x[i]=c%2;
        c/=2;
    }
    for(i=23;i>=18;i--)
    {
        x[i]=d%2;
        d/=2;
    }
    for(int j=0;j<3;j++)
    {
        int res=0;
        int dim=1;
        for(int k=7;k>=0;k--)
        {
            res+=x[j*8+k]*dim;
            dim*=2;
        }
        printf("%c",res);
    }

}*/
// the question is:what is the remainder when the number is divided by 2017?
int main()
{
/*    string x;
    cin>>x;
    for(int i=0;i<19;i++)
    {
        outcode(incode(x[i*4]),incode(x[i*4+1]),incode(x[i*4+2]),incode(x[i*4+3]));
    }*/
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int read;
    	scanf("%d",&read);
    	printf("%d\n",read%2017);
    }
    return 0;
}

