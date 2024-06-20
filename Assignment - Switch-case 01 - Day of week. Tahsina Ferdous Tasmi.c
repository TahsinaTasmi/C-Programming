#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

    int main() {
        enum days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
        enum days weekDay;
        int i = 0;

        printf("\nEnter week number(1-7): ");
        scanf("%d", &weekDay);
    
    switch (weekDay)
    {
    case 1:
        printf("\nMonday\n");
        break;
    case 2:
        printf("\nTuesday\n");
        break;
    case 3:
        printf("\nWednesday\n");
        break;
    case 4:
        printf("\nThursday\n");
        break;
    case 5:
        printf("\nFriday\n");
        break;
    case 6:
        printf("\nSaturday\n");
        break;
    case 7:
        printf("\nSunday\n");
        break;

    default:
        printf(" Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}