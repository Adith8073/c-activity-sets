
#include<stdio.h>
int input()
{
    int x;
    printf("Enter the number :\n");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a, int b)
{
    int c;
    c=a%b; //c should be equal to zero.......SO,
    if(c != 0)
    {
        return find_gcd(b,c);
    }
    return b;
}
void output(int a, int b, int gcd)
{
    printf("The GCD of %d and %d is %d",a,b,gcd);
}

int main()
{
    int a,b;
    a=input();
    b=input();
    int gcd;
    gcd=find_gcd( a, b);
    output(a,b,gcd);
    return 0;
}