#include<stdio.h>
#include<math.h>
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
    float distance;
    distance = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    return distance;
}
void find_perimeter(Polygon *p)
{
    p->perimeter = 0;
    for(int i=0;i<p->sides;i++)
    {
        p->perimeter+=find_distance(p->p[i],p->p[i+1]);
    }
}
void output(Polygon p)
{
    printf("The Side of the USER Polygon is  %d\n And the perimeter of it is %f :",p.sides,p.perimeter);
}

int main()
{
    Polygon p;
    input_polygon( &p);
    point a,b;
    find_perimeter( &p);
    output(p);
    return 0;
}



// float n;
//     n=(((p.p[1].x - p.p[0].x)) * ((p.p[1].x - p.p[0].x))) + (((p.p[1].y - p.p[0].y)) * ((p.p[1].y - p.p[0].y)));
//     float distance;
//     distance=n;
//     int iteration=10;
//     for(int i=0;i<iteration;i++)
//     {
//         distance=0.5*(distance+n/distance);
//     }
//     distance=distance/2;
//     return distance;