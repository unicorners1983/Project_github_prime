#include "stdio.h"
int is_prim(int n);

int main()
{
    int i,n;
    for(n=4;n<1000;n=n+2)
    {
         for(i=n/2;i>0;i--)
         {
            if((is_prim(i) == 1) && (is_prim(n-i) == 1))
            {
                 printf("%d=%d+%d\n",n,i,n-i);
                break;
             }
        }
    }
 
}

int is_prim(int s)
{
    int i,flag = 1;
    for(i=2;i<s/2;i++)
    {
        if(s%i==0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}