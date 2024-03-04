// #include<stdio.h>
// typedef struct Point {
//     float x,y;
// } point;

// typedef struct polygon {
//     int sides;
//     point p[100];
//     float perimeter;
// } Polygon;

// int input_n()
// {
//     int a;
//     printf("Enter the Sides of Polygon:\n"); //this function knows the value and the variable of 'a' BUT IT IS 'RETURN'ING ONLY THE VALUE OF 'a'
//     scanf("%d",&a);
//     return a;
// }
// point input_point()
// {
//     point d;
//     printf("Enter the X-axis point:");
//     scanf("%f", &d.x);
//     printf("Enter the Y-axis point:");
//     scanf("%f", &d.y);
//     return d;
// }
// void input_polygon(Polygon *p)
// {
//     p->sides = input_n();
//     for(int i=0;i<p->sides;i++)
//     {
//         p->p[i]=input_point();
//     }
// }
// float find_distance(point a, point b)
// {
//     //d=√((x2 – x1)² + (y2 – y1)²)

// }
// void find_perimeter(Polygon *p)
// {

// }
// void output(Polygon p)
// {

// }

// int main()
// {
//     Polygon p;

// }

#include <stdio.h>
typedef struct point
{
    float x, y;
} Point;

typedef struct polygon
{
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point();
void input_polygon(Polygon *p);
float find_distance(Polygon p);
void find_perimeter(Polygon *p, float distance);
void output(Polygon p);
int main()
{
    Polygon p;
    float distance;
    int poly;
    char prompt_msg[100] = "ente the coordinates";
    // p.sides=input_n();
    Point a, b;
    input_polygon(&p);
    distance = find_distance(p);
    find_perimeter(&p, distance);
    output(p);
    return 0;
}
int input_n()
{
    int x;
    printf("enter the sides");
    scanf("%d", &x);
    return x;
}
Point input_point()
{
    Point p;
    printf("enter the x and y coordinates");
    scanf("%f %f", &p.x, &p.y);
    return p;
}
void input_polygon(Polygon *p)
{
    Polygon x;
    p->sides = input_n();
    for (int i = 0; i < p->sides; i++)
    {
        p->p[i] = input_point();
    }
}
float find_distance(Polygon p)
{
    float total;
    total = (((p.p[1].x - p.p[0].x)) * ((p.p[1].x - p.p[0].x))) + (((p.p[1].y - p.p[0].y)) * ((p.p[1].y - p.p[0].y)));
    float x;
    x = total;
    while (x * x - total > 0.00001)
    {
        x = 0.5 * (x + total / x);
    }
    return x;
}
void find_perimeter(Polygon *p, float distance)
{
    p->perimeter = p->sides * distance;
}
void output(Polygon p)
{
    printf("the perimeter of the polygon is %f", p.perimeter);
}