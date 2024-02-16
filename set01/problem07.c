#include <stdio.h>
void input();
void sum(int n,int *result);
void output(int n, int result);

int main()
{
    int n ;
    input(&n);
    int result=0;
    sum(n,&result);
    output(n,result);

    return 0;
}
void input(int *n)
{
    
    printf("Enter the value \n");
    scanf("%d",n);
    

}
void sum(int n,int *result)
{
    int i;
    // *result=0;
    for(i=1;i<=n;i++)
    {
        *result=*result+i;
    }
    
}
void output(int n, int result)
{
     printf("The sum of first %d natural numbers is: %d\n", n, result);
}