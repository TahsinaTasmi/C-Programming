#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 80
char cFileName[MAXLENGTH] = "sample.cfg";

void InitializeFile() 
{
    FILE* fptrFile;
    fopen_s(&fptrFile, cFileName, "w");
    if (fptrFile >= 0) 
    {
        fwrite("first_value 0\n", 1, 14, fptrFile);
        fwrite("second_value 1\n", 1, 15, fptrFile);
        fwrite("fourth_key 321\n", 1, 14, fptrFile);
        if (fptrFile) fclose(fptrFile);
    }
}

void Help() 
{
    printf("HELP - show this list\n");
    printf("INIT - initialize (reset) %s file\n", cFileName);
    printf("QUIT - exit application\n");
    printf("READ - reads a value\n");
    printf("SHOW - display %s\n", cFileName);
}

void ShowFile() {
    FILE* fptrFile;
    char cRecord[MAXLENGTH];
    if (!fopen_s(&fptrFile, cFileName, "r")) {
        while (fgets(cRecord, MAXLENGTH, fptrFile)) 
        {
            printf("%s", cRecord); 
        }
        printf("\n");
        fclose(fptrFile);
    }
    else printf("unable to open %s\n", cFileName);

}

void  readValue(char cKey[], char* cValue[]) 
{
    strcpy_s(cValue, MAXLENGTH, "default"); 
    FILE* fptrFile;
    char cRecord[MAXLENGTH];
    if (!fopen_s(&fptrFile, cFileName, "r")) 
    {
        cRecord[0] = 0;
        while (fgets(cRecord, MAXLENGTH, fptrFile)) 
        {
            char cKeyRead[MAXLENGTH];
            
            int iPosition = 0;
            while (iPosition < MAXLENGTH) 
            {
                if (cRecord[iPosition] == ' ') break; 
                else cKeyRead[iPosition] = cRecord[iPosition]; 
                iPosition++; 
            }
            cKeyRead[iPosition] = '\0';            
            
            char cValueRead[MAXLENGTH];
            cValueRead[0] = 0;
            int iValuePosition = iPosition + 1;
            while (iValuePosition < MAXLENGTH) 
            {
                if (cRecord[iValuePosition - (iPosition + 1)] == '\n') break; 
                else cValueRead[iValuePosition - (iPosition + 1)] = cRecord[iValuePosition];
                iValuePosition++;
            }
            cValueRead[iValuePosition - (iPosition + 1)] = '\0';  
            if (!strcmp(cKeyRead, cKey)) 
            {
                if (!strcmp(cValueRead, "0\n")) {
                    strcpy_s(cValue, MAXLENGTH, "1");
                    return;
                }
            }
            if (!strcmp(cKeyRead, cKey)) 
            {
                if (!strcmp(cValueRead, "1\n")) 
                {
                    strcpy_s(cValue, MAXLENGTH, "11");
                    return;
                }
            }
            if (!strcmp(cKeyRead, cKey)) 
            {
                if (!strcmp(cValueRead, "321")) 
                {
                    strcpy_s(cValue, MAXLENGTH, "321");
                    return;
                }
            }
        }
        printf("\n");
        fclose(fptrFile);
    }
    else printf("unable to open %s\n", cFileName);
}

void KeyValue() 
{
    printf("Which key? : ");
    char cKey[MAXLENGTH];
    char cReturnValue[MAXLENGTH];
    gets(cKey);
    readValue(cKey, &cReturnValue);
    printf("value or return value is : %s\n\n", cReturnValue);
}
void Application() 
{
    char cCommand[MAXLENGTH] = "NoCommand";
    while (strcmp(cCommand, "QUIT") != 0) {
        printf("HELP for command list. Your command? : ");
        gets(cCommand);
        if (strcmp(cCommand, "HELP") == 0) Help();
        if (strcmp(cCommand, "INIT") == 0) InitializeFile();
        if (strcmp(cCommand, "READ") == 0) KeyValue(); 
        if (strcmp(cCommand, "SHOW") == 0) ShowFile();
    }
}

int main()
{
    printf("Configuration File\n\n");
    Application();
    printf("\n\n-End Application-\n\n");
}
