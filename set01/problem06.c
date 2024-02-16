#include<stdio.h>
void input(int *a,int *b,int *c);
void compare(int a,int b,int c,int *largest);
void output(int a,int b,int c,int largest);

void input(int *a,int *b,int *c)
{
    printf("Enter the number:\n");
    scanf("%d",a,b,c);
}

void compare(int a,int b,int c,int *largest)
{
    int n;
    
    if(a>=b && a>=c)
    {
        *largest=a;
    }
    if(b>=a && b>=c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}
void output(int a, int b,int c,int largest)
{
    printf(" largest of %d %d %d is %d",a,b,c,largest);
}

int main()
{
    int a,b,c;
    input(&a,&b,&c);
    int largest;
    compare(a,b,c,&largest);
    output( a,b,c,largest);
    return 0;
}