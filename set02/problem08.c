#include <stdio.h>

struct Area_triangle {
    float base;
    float altitude;
    float area;
};
typedef struct Area_triangle triangle;

triangle input_triangle() {
    triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);
    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);
    return t;
}

void input_n_triangles(int n, triangle t[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for triangle %d:\n", i + 1);
        t[i] = input_triangle();
    }
}

void find_area(triangle *t) {
    t->area = 0.5 * t->base * t->altitude;
}

void find_n_areas(int n, triangle t[n]) {
    for (int i = 0; i < n; i++) {
        find_area(&t[i]);
    }
}

triangle find_smallest_triangle(int n, triangle t[n]) {
    triangle smallest = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i].area < smallest.area) {
            smallest = t[i];
        }
    }
    return smallest;
}

void output(int n, triangle t[n], triangle smallest) {
    printf("Details of triangles:\n");
    for (int i = 0; i < n; i++) {
        printf("Triangle %d - Base: %.2f, Altitude: %.2f, Area: %.2f\n", i + 1, t[i].base, t[i].altitude, t[i].area);
    }
    printf("Smallest triangle - Base: %.2f, Altitude: %.2f, Area: %.2f\n", smallest.base, smallest.altitude, smallest.area);
}

int main() {
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    triangle triangles[n];
    input_n_triangles(n, triangles);
    find_n_areas(n, triangles);
    triangle smallest = find_smallest_triangle(n, triangles);
    output(n, triangles, smallest);
    return 0;
}
