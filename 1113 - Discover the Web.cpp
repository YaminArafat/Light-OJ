#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string str,str2;
    scanf("%d",&n);
    while(n--)
    {
        printf("Case %d:\n",++c);
        stack<string>fs,bs;
        bs.push("http://www.lightoj.com/");
        while(cin>>str && str!="QUIT")
        {
            if(str=="VISIT")
            {
                cin>>str2;
                cout<<str2<<endl;
                bs.push(str2);
                while(!fs.empty())
                {
                    fs.pop();
                }
            }
            else if(str=="BACK")
            {
                if(bs.size()>1)
                {
                    str2=bs.top();
                    bs.pop();
                    cout<<bs.top()<<endl;
                    fs.push(str2);

                }
                else
                {
                    printf("Ignored\n");
                }
            }
            else if (str=="FORWARD")
            {
                if(!fs.empty())
                {
                    cout<<fs.top()<<endl;
                    str2=fs.top();
                    fs.pop();
                    bs.push(str2);
                }
                else
                {
                    printf("Ignored\n");
                }
            }
        }
    }
    return 0;
}
