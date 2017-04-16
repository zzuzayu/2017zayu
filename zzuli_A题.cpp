#include <bits/stdc++.h>

using namespace std;
const double deta=0.001;
int h,x1,y11,x2,y2;
int x,y,z,X,Y,Z;
double juli(double a,double b,double c,double d,double e,double f)
{
    double getit;
    getit=sqrt((d-a)*(d-a)+(e-b)*(e-b)+(f-c)*(f-c));
    return getit;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        scanf("%d%d%d%d%d",&h,&x1,&y11,&x2,&y2);
        scanf("%d%d%d%d%d%d",&x,&y,&z,&X,&Y,&Z);
        const double k=1.0*(y11-y2)/(1.0*(x1-x2));
        int shumu;
        scanf("%d",&shumu);
        int t=0;
        for(int i=0;i<shumu;i++)
        {
            scanf("%d",&t);
            double xx=x+t*X;
            double yy=y+t*Y;
            double zz=z+t*Z;
            double d;
            double dx=(xx+k*yy-k*y11+k*k*x1)/(k*k+1);
            double dy=(k*xx+k*k*yy-k*x1+y11)/(k*k+1);
            if(dx>max(x1,x2)||dx<min(x1,x2))
            {
                d=min(juli(x1,y11,h,xx,yy,zz),juli(x2,y2,h,xx,yy,zz));
            }
            else
            {
                d=juli(dx,dy,h,xx,yy,zz);
            }
            printf("%0.2f\n",d);
        }
    }
    return 0;
}
