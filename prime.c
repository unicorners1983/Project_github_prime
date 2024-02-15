#include "stdio.h"
int is_prim(int n);

int main()
{
    int i,n,label = 1;
    for(n=4;n<100000;n=n+2)
    {
         for(i=n/2;i>0;i--)
         {
            if((is_prim(i) == 1) && (is_prim(n-i) == 1))
            {
                label = 0;
                //printf("%d=%d+%d\n",n,i,n-i);
                break;
             }
        }

        if (label == 1)
        {
            break;
        }

    }

     if (label == 1)
        {
            printf("exist number which could not be divided to two prime %d", label);
        }
        else
        {
            printf("There is no number ");
            
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