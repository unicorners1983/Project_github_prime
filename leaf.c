#include "stdio.h"

int main()
{
    int i,a,b,c,d;
    for(i=1000;i<10000;i++)
    {
        a=i/1000;
        b=(i-a*1000)/100;
        c=(i-a*1000-b*100)/10;
        d=i-a*1000-b*100-c*10;

         if (a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==i)
        {
            printf("%d is leaf number\n",i);
        }
    }
   
    return 0;
}