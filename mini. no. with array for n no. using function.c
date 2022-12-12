#include<stdio.h>
int mini(int arr[],int);
int main()
{
    int a,b;
    int minimum;
    printf("enter no. of number");
    scanf("\n%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
    printf("\nenter %d number",i+1);
    scanf("\n%d",&arr[i]);
    }
    minimum=arr[0];
    b=mini(arr,a);
    printf("\nsmallest number is:%d",b);
    return 0;
}
    int mini(int arr[],int a)
    {
    int minimum;
    minimum=arr[0];
    for(int i=0;i<a;i++)
    {
    if(minimum>arr[i])
    {
    minimum=arr[i];
    }
    }
    return minimum;
    }