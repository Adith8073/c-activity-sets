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
    
}
point input_point(char *promt_msg)
{

    point newPoint;
    printf("%s", promt_msg);
    printf(" x");
    scanf("%f",&newPoint.x);
    printf("%s", promt_msg);
    printf(" y");
    scanf("%f",&newPoint.y);
    return newPoint;
    
}
int input_polygon(Polygon *p)
{
    for(int i=0;i<p->sides;i++){
        char str[100]= "Enter the coordinates of x and y";
        input_point(str);
    }
    

}
float find_distance(point a, point b)
{

}
void find_perimeter(Polygon* p)
{

}
void output(Polygon p)
{
     
}

int main()
{

}