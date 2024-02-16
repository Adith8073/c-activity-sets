#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene;
    isscalene=check_scalene( a, b, c);
    output( a,b,c, isscalene);
    return 0;
}
int input_side()
{
    int a;
    printf("Enter the sides of triangle:  ");
    scanf("%d",&a);
    
    return a;
}
int check_scalene(int a, int b, int c)
{
    if(a!=b && b!=c && c!=a)
    {
        return 0;
        
    }
    else
    {
        return 1;
        
    }
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene==0)
    {
        printf("The triangle is Scalene........");
    }
    else
    {
        printf("The triangle is Not a Scalene");
    }
}