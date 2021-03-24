#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a ,b , t ,i , a_mod , b_mod;

    while(1==scanf("%lld",&t))
    {
        i=0;
        while(t--)
        {
            scanf("%lld %lld",&a,&b);
            a--;
            a_mod = a%3;
            b_mod = b%3;
            if(a_mod==0)
            {
                a=a/3*2;
            }
            else
            {
                a=floor(a/3)*2;
                if(a_mod==2)
                a++;
            }

            if(b_mod==0)
            {
                b=b/3*2;
            }
            else
            {
                b=floor(b/3)*2;
                if(b_mod==2)
                b++;
            }
            printf("Case %lld: %lld\n",++i,b-a);
        }

    }
    return 0;
}
