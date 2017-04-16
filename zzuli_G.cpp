#include <bits/stdc++.h>

using namespace std;
const int maxn=1e6+7;
string str[maxn];
int n,m;
bool xorit(string i,string j)
{
    bool getit[m];
    for(int a=0;a<i.length();a++)
    {
        if(i[a]==j[a])getit[a]=0;
        else getit[a]=1;
    }
    for(int c=0;c<m;c++)
	{
		printf("%d",getit[c]);
	} 
	printf("**");
	cout<<i<<'*'<<j<<endl;
    for(int a=0;a<i.length();a++)
    {
        if(i[a]=='1'&&getit[a]==0)return true;
        if(getit[a]==1&&i[a]=='0')return false;
    }
    return false;
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        int temp=0;
        for(int i=0;i<n;i++)cin>>str[i];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(xorit(str[j],str[k]))temp++;
            }
        }
        printf("%d\n",temp);
    }
    return 0;
}

