#include <bits/stdc++.h>

using namespace std;
struct Searchit
{
    int num;
    int temp=0;
};
const int maxn=1e5+7;
const int maxv=1e3+7;
set<int> connect[maxn];
vector<Searchit> searchit;
bool visit[maxn];
int N,K,M;
int k[maxv];
void bfs(int n)
{
    Searchit in;
    in.num=1;
    in.temp=1;
    searchit.push_back(in);
    int r=0;
    int l=0;
    while(l>=r)
    {
        int number=searchit[r].num;
        for(set<int>::iterator itit=connect[number].begin();itit!=connect[number].end();itit++)
        {
            if(!visit[*itit])
            {
                Searchit join;
                join.num=*itit;
                join.temp=searchit[r].temp+1;
                visit[*itit]=true; 
                searchit.push_back(join);
                l++;
            }
            if(*itit==n)
            {
                printf("%d\n",searchit[r].temp+1);
                return;
            }
        }
        r++;
    }
    printf("-1\n");
    return;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&N,&K,&M);
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<K;j++)
            {
                scanf("%d",&k[j]);
            }
            for(int j=0;j<K;j++)
            {
                for(int a=0;a<K;a++)
                {
                    if(j!=a)connect[k[j]].insert(k[a]);
                }
            }
        }
        searchit.clear();
        memset(visit,0,sizeof(visit));
        bfs(N);
    }
    return 0;
}

