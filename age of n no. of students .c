#include <stdio.h>

int main() {
    int n,sum=0;
    printf("enter no. of students");
    scanf("\n%d",&n);
    int age[n];
    for(int i=0;i< n;i++){
    printf("\nenter age of student");
    scanf("%d",&age[i]);
    sum=sum+age[i];
    }
    printf("\n%d\n",sum);
    return 0;
}