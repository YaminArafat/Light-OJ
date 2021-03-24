#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdio>
#define PI  3.14159265359
using namespace std;
int main()
{
   int t , i=0;
   while(1==scanf("%d",&t))
   {
       i=0;
       while(t--)
       {
           int ox ,oy , ax ,ay , bx ,by ;
           double d , n , p ,cs , sn, ab , oa , r , s;
           scanf("%d %d %d %d %d %d",&ox ,&oy ,&ax,&ay,&bx,&by);
           oa = sqrtl((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
           r = 2*oa ;
           ab = sqrtl((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
           cs = acos(ab/r);
           cs*=2;
           cs=PI - cs ;

           s= oa*cs;
           printf("Case %d: %.8lf\n",++i,s);




       }
   }
   return 0;
}

