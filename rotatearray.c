#include<stdio.h>
void main()
{
static voidleftRotate(int arr[],int d)
{
int n=arr.length;
if(n>0)
{
if(d>n)
{
d=d%n;
}
reverseArray(arr,0,d-1);
reverseArray(arr,d,n-1);
revreseArray(arr,0,n-1);
}
}
getch();
}
