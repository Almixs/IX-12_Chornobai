#include <stdio.h>
int main()
{
    int x,y,z;
    x=2; y=1; z=0;
    x=x && y || z;
    printf("%d\n",x);
    printf("%d\n",x || !y && z);
}
