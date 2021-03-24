#include <bits/stdc++.h>
using namespace std;
double bs(double x,double y,double c)
{
    double p,q,hgh,low,mid,mn,tmp;
    hgh=min(x,y);
    low=0.0;
    //cout<<hgh<<" "<<low<<endl;
    while(hgh-low>0.000001)
    {
        mid=(hgh+low)/2;
        //cout<<mid<<endl;
        tmp=(x*x)-(mid*mid);
        //cout<<tmp<<endl;
        p=sqrt(tmp);
        tmp=(y*y)-(mid*mid);
        q=sqrt(tmp);
        tmp=(p*q)/(p+q);
        if(tmp>c)
        {
            low=mid;
        }
        else
        {
            hgh=mid;
        }
        //cout<<tmp<<endl;
    }
    return mid
}
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int t,cnt=0;
    double x,y,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf",&x,&y,&c);
        //printf("%lf %lf %lf\n",x,y,c);
        printf("Case %d: %lf\n",++cnt,bs(x,y,c));
    }
    return 0;
}
