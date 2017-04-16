#include<bits/stdc++.h>
using namespace std;
set<int> sum3;
set<int> sum2;
set<int> sum1;
set<int> good;
void build(int x)
{
	if(sum3.find(x)!=sum3.end())good.insert(x);
	for(set<int>::iterator itit=sum2.begin();itit!=sum2.end();itit++)
	{
		sum3.insert(*itit+x);
	}
	for(set<int>::iterator itit=sum1.begin();itit!=sum1.end();itit++)
	{
		sum2.insert(*itit+x);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int shu;
		int read;
		cin>>shu;
		good.clear();
		sum3.clear();
		sum2.clear();
		sum1.clear();
		for(int i=0;i<shu;i++)
		{
			scanf("%d",&read);
			build(read);
			sum1.insert(read);		
		}
		cout<<good.size()<<endl;
	}
} 
