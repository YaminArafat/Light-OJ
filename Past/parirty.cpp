
#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;
 long long int   arr[] = {1 , 2 , 4 , 8 , 16 , 32 , 64 , 128 , 256 , 512 , 1024 , 2048 , 4096 , 8192 , 16384 , 32768 , 65536 , 131072 , 262144 , 524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648};
int main(){


   int t , i=0;
   while(1==scanf("%d",&t))
   {
       i=0;
       while(t--)
       {
           long long int  n , p , sum=0 , c = 0;
           double pd ;
           scanf("%lld",&n);
           pd = log(n)/log(2);
           p=pd;

           while(p!=-1)
           {

                sum  += arr[p] ;
                if(sum<=n)c++;
                else sum  -= arr[p] ;
                p--;

           }
           if(c%2==0)printf("Case %d: even\n",++i);
           else printf("Case %d: odd\n",++i);



       }
   }
   return 0;
}
