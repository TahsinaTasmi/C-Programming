#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void WriteString2File(char* String) 
{
    FILE* fptrFile;
    fopen_s(&fptrFile, "file01.txt", "w");
    if (fptrFile == NULL) 
    {
        printf("Unable to open file01.txt\n");
        return;
    }
    fprintf(fptrFile, "%s", String);
}
void DoFile() 
{
    char cString[255];

    for (int iPos = 0; iPos < 255; iPos++) cString[iPos] = '\0';

    printf("Enter a string: ");
    gets(cString);
    
    FILE* fptrFile;
    fopen_s(&fptrFile, "file01.txt", "w");

    fwrite(&cString, 1, sizeof(cString), fptrFile);

    fwrite("\n", 1, 1, fptrFile);

    fclose(fptrFile);
    
    fopen_s(&fptrFile, "file01.txt", "r");
    char cReadBuff[255];

    fread(cReadBuff, 255, 1, fptrFile);

    printf("\nThe first string that has been entered is : % s\n\n", cReadBuff);

    fclose(fptrFile);
    
    printf("\nEnter another string: ");
    
    for (int iPos = 0; iPos < 255; iPos++) cString[iPos] = '\0';

    fflush(stdin);
    gets(cString);

    printf("\nAnother string that has been entered is : %s\n", cString);

    fopen_s(&fptrFile, "file01.txt", "a");

    fwrite(&cString, 1, sizeof(cString), fptrFile);

    fclose(fptrFile);
    
    printf("\n-End Application-\n");

}


int main()
{
    DoFile();
}
