#include <stdio.h>
int max(int[],int);
int main() {
    int a,b,c;
    printf("enter no. of student");
    scanf("\n%d",&a);
    c=a;
    int marks[a];
    for(int i=0;i<a;i++){
    printf("\nenter marks");
    scanf("\n%d",&marks[i]);
    }
    b= max (marks,c);
    printf("maximum marks are %d\n",b);
    return 0;
}
int max(int marks[],int c){
    int max=0;
    for(int i=0;i<c;i++){
    if(max<marks[i]){
    max=marks[i];
    }
    }
    return max;
}