#include<stdio.h>
int input()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    return x;
}
int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void output(int a, int b, int sum)
{
    printf("The sum of the enter numbers is %d ",sum);
}

int main()
{
    int a,b;
    a=input();
    b=input();
    int sum;
    sum=add(a,b);
    output( a,  b,  sum);
    return 0;
}