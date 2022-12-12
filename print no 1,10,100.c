#include<stdio.h>

int main()
{
    int i,m,o,n;
    printf("enter 3,4 digit no.");
    scanf("%d",&i);
    for(m=1;m<=i;m++){
    printf("%d,",m);
    }
    printf("\n");
    for(n=10;n<=i;n=n+10)
    {
    printf("%d,",n);
    }
    printf("\n");
    for(o=100;o<=i;o=o+100)
    {
    printf("%d,",o);
    }
    return 0;
}