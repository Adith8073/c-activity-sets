#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float number, sqrt;
    
    number = input();
    sqrt = square_root(number);
    output(number, sqrt);
    
    return 0;
}

float input() {
    float n;
    printf("Enter number: ");
    scanf("%f", &n);
    return n;
}

float square_root(float n) 
{
    float x=n;
    int iteration=10;
    for(int i=0;i<iteration;i++)
    {
        x=0.5*(x+n/x);
    }
    x=x/2;
    return x;
}

void output(float n, float sqrroot) {
    printf("Square root of %.4f is %.4f\n", n, sqrroot);
}