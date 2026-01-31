//Program to define a structure and access its members
#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s1;

    s1.roll = 101;
    s1.marks = 89.5;

    printf("Roll No: %d\n", s1.roll);
    printf("Marks: %.2f", s1.marks);

    return 0;
}
