#include<stdio.h>

struct Area_triangle 
{
	float base;
    float altitude;
    float  area;
};
typedef struct Area_triangle triangle;

triangle input_triangle()
{
    triangle t;
    printf("Enter the Base of the Triangle to find its Area\n");
    scanf("%f",&t.base);
    printf("Enter the Altitude of the Triangle to find its Area\n");
    scanf("%f",&t.altitude);
    return t;
}
void find_area(triangle *t)
{
    t->area=0.5*(t->base*t->altitude);
}
void output(triangle t)
{
    printf("The area of the Triangle is:%.4f",t.area);
}

int main()
{
    triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}