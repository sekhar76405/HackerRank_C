//Print the sum of the digits of the five digit number.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int c,sum=0,d=0;
int main() {
	
    int n;
    scanf("%d", &n);
    
    
    printf("%d",fun(n));



    return 0;
}

int fun(int a)
{
    c = a % 10; 
    sum = c + sum;
    a = a/10;
    d = d+c;
    if(c*5==d+a)
    {
        return c+d;
    }

    else if(a==c)
    {
        return sum;
    }
   else
   {
        return fun(a);
   }

}

