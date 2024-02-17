# 0 ".\\problem05.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 ".\\problem05.c"

# 1 "c:\\mingw\\x86_64-w64-mingw32\\include\\stdio.h" 1 3
# 3 ".\\problem05.c" 2
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
    c=a%b;
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
