#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,m,n;
    float x,y,c,d;

    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);

    printf("%d %d\n",a+b,a-b);
    
    m=x+y;
    n=x-y;

    c=(x+y)-m;
    c=c*10;
    
    a=c;
    c=c-a;

    d=(x-y)-n;
    d=d*10;

    b=d;
    d=d-b;
    
   
   if((x+y)>0)
   {
       if((c)>=0.5)
       {
           a++;
       }
   }
   else
   {
       if((-c)>=0.5)
       {
           a--;
           a=-a;
       }
       else
       {
           a=-a;
       }
   }
    if((x-y)>0)
   {
       if(d>=0.5)
       {
           b++;
       }
   }
   else
   {
       if((-d)>=0.5)
       {
           b--;
           b=-b;
       }
       else
       {
           b=-b;   
       }
   }
    
    
    printf("%d.%d %d.%d",m,a,n,b);
    return 0;
}
