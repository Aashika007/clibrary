#include <stdio.h>

int main() {
    char name[50], gender;
    int roll;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);

    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll: %d\nGender: %c\n", name, roll, gender);

    return 0;
}
