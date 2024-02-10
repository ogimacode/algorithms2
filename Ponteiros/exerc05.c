
#include <stdio.h>

int *teste()
{
    int a = 7;
    
    return &a;
}

int main()
{
    int *p;
    
    p = teste();
    
    printf("%d\n", *p);
}

