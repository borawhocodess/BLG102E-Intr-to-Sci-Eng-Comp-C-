#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fs;

    char ch, buffer[200], arr[3737][200];
    int i = 0, j = 0;

    fs = fopen("alice.txt", "r");

    int count= 0;

    while(ch != EOF && count <3737)
    {

        ch = fgetc(fs);

        if(ch == '\n')
        {
            strcat(arr[j], buffer);
            j++;
            bzero(buffer, 200);
            i = 0;
            count++;
            continue;
        }
        else
        {
            buffer[i] = ch;
            i++;
        }
    }

    for(i = 0; i < j; i++) {
        printf("Number [%d]: %s\n", i, arr[i]);
    }

    fclose(fs);

    return 0;
}
