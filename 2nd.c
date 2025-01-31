#include<stdio.h>
#include<string.h>
int main()
{
    // Timetable 
    char day[10];
    printf("Enter a day (Example:M,T,W,Th,F,S,Su): \n");
    scanf("%9s",day);
    if(strcmp(day,"M")==0){
            printf("09:30 - 10:30: Physics\n");
            printf("10:30 - 11:30: C Programming\n");
            printf("11:30 - 12:30: Mathematics\n");
            printf("01:30 - 03:30: C Programming Lab\n");
        }
        else if(strcmp(day,"T")==0){
            printf("09:30 - 10:30: Physics\n");
            printf("10:30 - 11:30: C Programming\n");
            printf("11:30 - 12:30: Mathematics\n"); 
            printf("12:30 - 01:30: Electronics\n");
        }  
        else if(strcmp(day,"W")==0){
            printf("09:30 - 10:30: Physics\n");
            printf("10:30 - 11:30: C Programming\n"); 
            printf("11:30 - 12:30: Mathematics\n");
            printf("12:30 - 01:30: Electronics\n");
            printf("01:30 - 03:30: Physics Lab\n");
        }
        else if(strcmp(day,"Th")==0){
            printf("09:30 - 10:30: Physics\n");
            printf("10:30 - 11:30: C Programming\n");
            printf("11:30 - 12:30: Mathematics\n"); 
            printf("12:30 - 01:30: English\n");
        }
        else if(strcmp(day,"F")==0) {
            printf("09:30 - 10:30: Electronics\n");
            printf("10:30 - 11:30: English\n");
            printf("11:30 - 12:30: Artificial Intelligence\n");
            printf("12:30 - 01:30: Artificial Intelligence\n");
            printf("03:30 - 05:30: Graphics Lab\n");
        }
        else if(strcmp(day,"S")==0) {
            printf("Day off\n");
        }
        else if(strcmp(day,"Su")==0) {
            printf("Day off\n");
        }
        else{
            printf("Invalid day\n");
            printf("Please enter a valid day\n, Example: M,T,W,Th,F,S,Su\n");

    }
    return 0;
}