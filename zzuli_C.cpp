#include<bits/stdc++.h>

using namespace std;
const int maxn =1e6+7;
long long qianzuihe[maxn];

int main()

{

	int t;

	scanf("%d",&t);

	while(t--)

	{

		int shu;

		int read;
		scanf("%d",&shu);
		memset(qianzuihe,0,sizeof(qianzuihe));
		long long temp=0;
		int res=0;
		for(int i=0;i<shu;i++)

		{
			long long read;
			scanf("%lld",&read);
			temp+=read;		
			qianzuihe[i]=temp;
			if(i>2)
			{
			if(qianzuihe[i]==qianzuihe[i-1]+qianzuihe[i-2]+qianzuihe[i-3])res++;
			}
		}

		cout<<res<<endl;

	}

}
