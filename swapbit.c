#include<stdio.h>
void swap(int ,int );
void main()
{
int a,b;
printf("\nEnter the two num");
scanf("%d\t%d",&a,&b);
printf("\n before swapping%d\t%d ",a,b);
swap(a,b);
}
void swap(int x,int y)
{
x=x^y;
y=x^y;
x=x^y;
printf("\nAfter swapping %d\t%d",x,y);
}
