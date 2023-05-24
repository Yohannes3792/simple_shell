#include <stdio.h>

#define MAX_LENGTH 100

typedef struct {
    int x;
    int y;
} Point;

void print_point(Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

int calculate_sum(int a, int b) {
    return a + b;
}

int main() {
    Point p = {3, 7};
    int num1 = 5;
    int num2 = 10;
    int sum = calculate_sum(num1, num2);

    printf("Sum: %d\n", sum);
    print_point(p);

    return 0;
}
