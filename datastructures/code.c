#include <stdio.h>

int main()
{
    // arrays
    int a[5] = {1,2,3,4,5};
    a[0] = 1;
    for(int i=0; i<5; i++)
        printf("%d", a[i]);
    return 0;    
}