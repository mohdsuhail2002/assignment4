#include<stdio.h>
#include<math.h>
int main()
{
    int i,s=0;
    for(i=1;i<=11;s=pow(i++,2))
    { 
        printf("\n%d",s);
    }
    printf("\n");
    return 0;
}