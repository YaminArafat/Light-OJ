#include <bits/stdc++.h>
using namespace std;
bool flag[110];
int main()
{
    int t,c=0,cnt,f,x,y;
    scanf("%d",&t);
    char s1[110],s2[110];
    while(t--)
    {
        cnt=0;
        scanf(" %[^\n]",s1);
        scanf(" %[^\n]",s2);
        x=strlen(s1);
        y=strlen(s2);
        for(int i=0; i<strlen(s2); i++)
        {
            if(s2[i]>='A' && s2[i]<='Z')
            {
                s2[i]+=32;
            }
            if(s2[i]==' ')
            {
                y--;
            }
        }
        for(int i=0; i<strlen(s1); i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
            {
                s1[i]+=32;
            }
            if(s1[i]==' ')
            {
                x--;
            }
        }
        if(y<x)
        {
            for(int i=0; i<strlen(s2); i++)
            {
                if(s2[i]!=' ')
                {
                    f=1;
                    for(int j=0; j<strlen(s1); j++)
                    {
                        if(!flag[j] && s2[i]==s1[j])
                        {
                            flag[j]=1;
                            cnt++;
                            f=0;
                            break;
                        }
                    }
                    if(f)
                    {
                        printf("Case %d: No\n",++c);
                        break;
                    }
                }
            }
            if(!f)
            {
                if(cnt==y)
                {
                    printf("Case %d: Yes\n",++c);
                }
                else
                {
                    printf("Case %d: No\n",++c);
                }
            }
        }
        else
        {
            for(int i=0; i<strlen(s1); i++)
            {
                //cout<<s1[i];
                if(s1[i]!=' ')
                {
                    f=1;
                    //cout<<s1[i];
                    for(int j=0; j<strlen(s2); j++)
                    {
                        if(!flag[j] && s1[i]==s2[j])
                        {
                            flag[j]=1;
                            cnt++;
                            f=0;
                            break;
                            //cout<<s1[i];
                        }
                    }
                    if(f)
                    {
                        printf("Case %d: No\n",++c);
                        break;
                    }
                }
            }
            if(!f)
            {
                if(cnt==x)
                {
                    printf("Case %d: Yes\n",++c);
                }
                else
                {
                    printf("Case %d: No\n",++c);
                }
            }
        }
        memset(flag,0,sizeof(flag));
    }
    return 0;
}
