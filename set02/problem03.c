#include<stdio.h>

int input_number()
{
    int x;
    printf("Enter the number to find whether it is composite number or not: \n");
    scanf("%d",&x);
    return x;
}
int is_composite(int n)
{
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
void output(int n, int result)
{
    if(result==1){
        printf("num is composite: ");
    }
    else{
        printf("num is prime");
    }
}


int main()
{
    int x=input_number();
    int res=is_composite(x);
    output(x,res);
}
