#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    float base,height;
    input(&base, &height);
    float area;
    find_area( base ,  height,  &area);
    output( base, height, area);
    return 0;
}
void input(float *base, float *height)
{
    printf("Enter the Base of the triangle:\n");
    scanf("%f",base);
    printf("Enter the Height of the triangle:\n");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=0.5*(base*height);
}
void output(float base, float height, float area)
{
    printf("The Area of the triangle is: %f of Base %f and Height %f",area,base,height);
}