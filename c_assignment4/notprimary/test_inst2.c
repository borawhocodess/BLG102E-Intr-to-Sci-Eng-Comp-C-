#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct instruction_s {
    int step;
    int index;
};
int main(int argc, char const *argv[])
{

    FILE * finst = fopen(argv[1], "r");

    char ch, buffer[200];
    int i = 0, arr[10000], j = 0;


    while(ch != EOF)
    {
        ch = fgetc(finst);

        if(ch == ' ' || ch == '\n')
        {
            j++;
            i = 0;
            continue;
        }
        else
        {
            i++;
        }
    }
    printf("%d\n", j);

        int n_instructions = j/2;
    struct instruction_s instructions[n_instructions];



rewind(finst);

i = 0;
j = 0;
ch = 'a';
    while(ch != EOF)
    {
        ch = fgetc(finst);

        if(ch == ' ' || ch == '\n')
        {
            if (j %2 == 0)
            {
                instructions[(j+1)/2].step = atoi(buffer);

            }
            else
            {
                instructions[(j)/2].index = atoi(buffer);
            }
            j++;
            bzero(buffer, 200);
            i = 0;
            continue;
        }
        else
        {
            buffer[i] = ch;
            i++;
        }
    }

    for(i = 0; i < j/2; i++) {
        printf("instructions[%d].step: %d\n", i, instructions[i].step);
        printf("instructions[%d].index: %d\n", i, instructions[i].index);
    }

printf("\n");


for (int i = 1; i < j/2; ++i)
    {
        instructions[i].step += instructions[i-1].step;
    }


    for(i = 0; i < j/2; i++) {
        printf("instructions[%d].step: %d\n", i, instructions[i].step);
        printf("instructions[%d].index: %d\n", i, instructions[i].index);
    }

    fclose(finst);

    return 0;
}