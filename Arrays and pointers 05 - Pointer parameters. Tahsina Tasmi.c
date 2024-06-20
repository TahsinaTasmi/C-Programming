#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct rect { float x1, y1, x2, y2; };

void Scale(struct rect original, struct rect* smaller, struct rect* bigger)
{
    smaller->x1 = original.x1 * 0.5;
    smaller->y1 = original.y1 * 0.5;
    smaller->x2 = original.x2 * 0.5;
    smaller->y2 = original.y2 * 0.5;
    
    bigger->x1 = original.x1 * 2.0;
    bigger->y1 = original.y1 * 2.0;
    bigger->x2 = original.x2 * 2.0;
    bigger->y2 = original.y2 * 2.0;
}

int main()

{
    printf("Pointer parameters.\n\n");

    struct rect Original;

    Original.x1 = 3.0;
    Original.y1 = 3.0;
    Original.x2 = 3.0;
    Original.y2 = 3.0;
    
    struct rect MadeSmaller, MadeBigger;
    
    Scale(Original, &MadeSmaller, &MadeBigger);
    
    printf("Original (x1, y1), (x2, y2) (%f, %f), (%f %f)\n\n", Original.x1, Original.y1, Original.x2, Original.y2);
    
    printf("MadeSmaller (x1, y1), (x2, y2) (%f, %f), (%f %f)\n\n", MadeSmaller.x1, MadeSmaller.y1, MadeSmaller.x2, MadeSmaller.y2);
    
    printf("MadeBigger (x1, y1), (x2, y2) (%f, %f), (%f %f)\n\n", MadeBigger.x1, MadeBigger.y1, MadeBigger.x2, MadeBigger.y2);


}