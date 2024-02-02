#include<stdio.h>
struct complex_number
{
    float real;
    float img;
};
typedef struct complex_number complex;

complex input()
{
    
    complex c;
    printf("Enter the complex number:");
    scanf("%f",&c.real);
    scanf("%f",&c.img);
    return c;
}
complex find_sum(complex c1, complex c2)
{
    complex sum;
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    return sum;
}
void output(complex c1, complex c2, complex sum) {
    printf("Complex Number 1: %.2f + %.2fi\n", c1.real, c1.img);
    printf("Complex Number 2: %.2f + %.2fi\n", c2.real, c2.img);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.img);
}

int main()
{
    complex c1,c2,sum;
    c1=input();
    c2=input();
    sum=find_sum( c1, c2);
    output( c1,  c2,  sum);
    return 0;
}