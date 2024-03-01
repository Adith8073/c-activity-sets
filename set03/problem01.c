#include <stdio.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the coordinates of FIRST point in 2D\n");
    scanf("%f %f", x1, y1);
    printf("Enter the coordinates of SECOND point in 2D\n");
    scanf("%f %f", x2, y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float n;
    n=(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    float distance;
    distance=n;
    int iteration=10;
    for(int i=0;i<iteration;i++)
    {
        distance=0.5*(distance+n/distance);
    }
    distance=distance/2;
    return distance;
    //distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The Distance of (%f,%f) and (%f,%f) is    %f Centimeter(cm)", x1, y1, x2, y2, distance);
}

int main()
{
    float x1, x2, y2, y1;
    input(&x1, &y1, &x2, &y2);
    float distance;
    distance = find_distance(x1, y1, x2, y2);
    output( x1, y1, x2, y2, distance);
    return 0;
}




    // float x=n;
    // int iteration=10;
    // for(int i=0;i<iteration;i++)
    // {
    //     x=0.5*(x+n/x);
    // }
    // x=x/2;
    // return x;