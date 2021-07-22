#include<stdio.h>
int main()
{
    int n , c1 , c2 , c3 , c4 ;
    while(1==scanf("%d",&n))
    {
        int i=0,arr[n][2];
        c1=0,c2=0,c3=0,c4=0;
        while(1)
        {
            if(i==n)break;
            scanf("%d %d",&arr[i][0],&arr[i][1]);
            if(arr[i][0]>0 && arr[i][1]>=0)c1++;
            else if(arr[i][0]<0 && arr[i][1]>=0)c2++;
            else if(arr[i][0]<0 && arr[i][1]<0)c3++;
            else if(arr[i][0]>0 && arr[i][1]<0)c4++;
            i++;
        }
        if ((c2==0 && c3==1 ) || (c2==1 && c3==0) ) printf("YES\n");
        else if((c1==0 && c4==1 ) || (c1==1 && c4==0) )printf("YES\n");
        else if ( (c2==0 && c3==0 && c4==0) || (c1==0 && c3==0 && c4==0) || (c1==0 && c2==0 && c3==0) || (c1==0 && c2==0 && c4==0) ) printf("YES\n");
        else if( (c2==0 && c3==0) || (c1==0 && c4==0) ) printf("YES\n");
        else printf("NO\n");


    }
    return 0;

}
