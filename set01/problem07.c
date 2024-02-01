#include <stdio.h>
int input();
int sum(int n);
void output(int n, int result);

int main()
{
    int n ,result;
    n=input();
    result=sum(n);
    output(n,result);

    return 0;
}
int input()
{
    int n;
    printf("Enter the value \n");
    scanf("%d",&n);
    return n;

}
int sum(int n)
{
    int i,result=0;
    for(i=1;i<=n;i++)
    {
        result=result+i;
    }
    return result;
}
void output(int n, int result)
{
     printf("The sum of first %d natural numbers is: %d\n", n, result);
}