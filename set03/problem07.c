#include<stdio.h>
typedef struct point
{
    float x, y;
} point;

typedef struct Line {
    point p1, p2;
    float distance;
} line;

point input_point()
{
    point p;
    printf("Enter the Points on X-axis AND Y-axis\n");
    scanf("%f %f",&p.x,&p.y);
    return p;
}
line input_line()
{
    line l;
    l.p1=input_point();
    l.p2=input_point();
    return l;
}
void find_length(line *l)
{
    l->distance = sqrt(pow((l->p2.x - l->p1.x), 2) + pow((l->p2.y - l->p1.y), 2));          //d=√((x2 – x1)² + (y2 – y1)²)
}
void output(line l)
{
    printf("The Distance Between the %f,%f and %f,%f is : %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}

int main()
{
    //no need to call the input_point() function as it is already called in input_line() function
    // before initializing variable function should not be called.
    line l;
    l = input_line();
    find_length(&l);
    output(l);
    return 0;
}