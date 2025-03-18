#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    printf("What do you want to calculate (Example: Add, Subtract, Multiply, Divide, SI(Simple Intrest)) : ");
    scanf("%19s",&a);

    if(strcasecmp(a, "Add") ==0){
        int b, c;
        printf("Enter two numbers:");
        scanf("%d %d",&b, &c);
        printf("Result: %d\n", b + c);
    } 

    else if (strcasecmp(a, "Subtract") ==0) {
        int b, c;
        printf("Enter two numbers: ");
        scanf("%d %d", &b, &c);
        printf("Result: %d\n", b - c);
    } 

    else if (strcasecmp(a, "Multiply") ==0) {
        int b, c;
        printf("Enter two numbers: ");
        scanf("%d %d", &b, &c);
        printf("Result: %d\n", b * c);
    } 

    else if (strcasecmp(a, "Divide") ==0) {
        float b, c;
        printf("Enter two numbers: ");
        scanf("%f %f", &b, &c);
        if (c != 0) {
            printf("Result: %.2f\n", b / c);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    
    else if (strcasecmp(a, "SI") == 0) {
        float p, r, t;
        printf("Enter Principal, Rate, and Time: ");
        scanf("%f %f %f", &p, &r, &t);
        printf("Simple Interest: %.2f\n", (p * r * t) / 100);
    } 

    else {
        printf("Invalid operation!\n");
        printf("Please enter a valid operation, Example: Add, Subtract, Multiply, Divide, SI(Simple Intrest)\n");
    }

    return 0;
}

