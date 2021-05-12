#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fs;

    char ch, buffer[32];
    int i = 0, arr[100], j = 0;

    fs = fopen("instructions.txt", "r");

    while(ch != EOF)
    {
        ch = fgetc(fs);

        if(ch == ' ' || ch == '\n')
        {
            arr[j] = atoi(buffer);
            j++;
            bzero(buffer, 32);
            i = 0;
            continue;
        }
        else
        {
            buffer[i] = ch;
            i++;
        }
    }

    for(i = 0; i < j; i++) {
        printf("Number [%d]: %d\n", i, arr[i]);
    }

    fclose(fs);

    return 0;
}
