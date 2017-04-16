#include <bits/stdc++.h>

using namespace std;
const double deta=0.001;
int h,x1,y1,x2,y2;
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
        scanf("%d%d%d%d%d",&h,&x1,&y1,&x2,&y2);
        scanf("%d%d%d%d%d%d",&x,&y,&z,&X,&Y,&Z);
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
            double dx,dy;
            if(x1!=x2)
            {
                const double k=1.0*(y1-y2)/(1.0*(x1-x2));
                 dx=(xx+k*yy-k*y1+k*k*x1)/(k*k+1);
                 dy=(k*xx+k*k*yy-k*x1+y1)/(k*k+1);
            }
            else
            {
                dx=x1;
                dy=yy;
            }
            if(dx>max(x1,x2)||dx<min(x1,x2)||dy>max(y1,y2)||dy<min(y1,y2))
            {
                d=min(juli(x1,y1,h,xx,yy,zz),juli(x2,y2,h,xx,yy,zz));
            }
            else
            {
                d=juli(dx,dy,h,xx,yy,zz);
            }
            printf("%.2f",d);
        }
    }
    return 0;
}
