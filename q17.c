
#include <stdio.h>

int main() {
    int mark;
    char grade;

    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

    if (mark >= 90)
        grade = 'A';
    else if (mark >= 80)
        grade = 'B';
    else if (mark >= 70)
        grade = 'C';
    else if (mark >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);

    return 0;
}

