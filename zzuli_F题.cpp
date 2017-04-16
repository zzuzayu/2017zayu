#include <bits/stdc++.h>

using namespace std;
int dianchang=0;
int zhutang[4];
int renshu;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&renshu);
        memset(zhutang,0,sizeof(zhutang));
        dianchang=0;
        for(int i=0;i<renshu;i++)
        {
            int read;
            scanf("%d",&read);
            if(read>dianchang)
            {
                dianchang=read+1;
            }
            else dianchang++;
            sort(zhutang,zhutang+4);
            if(dianchang>zhutang[0])
            {
                zhutang[0]=dianchang+5;
            }
            else zhutang[0]+=5;
        }
        printf("%d\n",zhutang[0]);
    }
    return 0;
}
