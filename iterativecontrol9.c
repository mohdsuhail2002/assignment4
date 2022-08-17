#include<stdio.h>
#include<math.h>
int main()
{
    int i,s=1;
    for(i=3;i<=11;s=pow(i++,3))
    { 
        printf("\n%d",s);
    }
    printf("\n");
    return 0;
}
