#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);  

    printf("Enter height: ");
    scanf("%f", &height);  

    printf("Enter grade: ");
    scanf(" %c", &grade);  

    printf("\n--- STUDENT DETAILS ---\n");
    printf("AGE: %d\n", age);
    printf("HEIGHT: %.2f\n", height);
    printf("GRADE: %c\n", grade);

    return 0;
}

