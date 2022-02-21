#include <stdio.h>

int main()
{
    int a = 3,b =4,x,y;
    
    x = a++ + ++a + ++a;
    
    y = a&&b || a || b;
    
    printf("x = %d , y = %d\n",x,y);

    return 0;
}

