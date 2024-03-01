#include<stdio.h>
typedef struct Point {
    float x,y;
} point;


typedef struct polygon {
    int sides;
    point p[100];
    float perimeter;
} Polygon;

int input_n()
{
    int a;
    printf("Enter the Sides of Polygon:\n"); //this function knows the value and the variable of 'a' BUT IT IS 'RETURN'ING ONLY THE VALUE OF 'a'
    scanf("%d",&a);
    return a;
}
point input_point()
{
    point d;
    printf("Enter the X-axis point:");
    scanf("%f", &d.x);
    printf("Enter the Y-axis point:");
    scanf("%f", &d.y);
    return d;
}
void input_polygon(Polygon *p)
{
    p->sides = input_n();
    for(int i=0;i<p->sides;i++)
    {
        p->p[i]=input_point();
    }
}
float find_distance(point a, point b)
{
    //d=√((x2 – x1)² + (y2 – y1)²)
    
}
void find_perimeter(Polygon *p)
{

}
void output(Polygon p)
{
     
}

int main()
{
    Polygon p;

}