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
    float distance;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The Distance of (%f,%f) and (%f,%f) is    %f", x1, y1, x2, y2, distance);
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