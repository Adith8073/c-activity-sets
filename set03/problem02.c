#include <stdio.h>

void input_triangle(float *x1, float *y1)
{
    printf("Enter X and Y POINTS in 2D\n");
    scanf("%f %f",x1, y1);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float result;
    result = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    return result != 0; //result should not be intialised to zero at begining|<->| ****If result is not zero, points form a triangle****
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result)
{
    if (result == 0)
    {
        printf("(%f %f),(%f %f),(%f %f) does not form a triangle\n", x1, y1, x2, y2, x3, y3);
    }
    else
    {
        printf("(%f %f),(%f %f),(%f %f) form a triangle\n", x1, y1, x2, y2, x3, y3);
    }
}

int main()
{
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1);
    input_triangle(&x2, &y2);
    input_triangle(&x3, &y3);
    int result;
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}
