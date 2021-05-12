#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 16384
#define MAX_CHAR_IN_LINE 256
#define SENTENCE_LENGTH 16384

struct instruction_s {
    int step;
    int index;
};

char* get_word(char* s, int n);
void get_sentence(char lines[MAX_LINE][MAX_CHAR_IN_LINE], struct instruction_s* instructions, int n_instructions, char* sentence);


int main(int argc, char const *argv[])
{
    if (argc > 3 || argc < 3){return EXIT_FAILURE;}

    FILE * fbook = fopen(argv[1], "r");
    FILE * finst = fopen(argv[2], "r");

    char fch; // file char
    char buffer[MAX_CHAR_IN_LINE];

    // get the book !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    char lines[MAX_LINE][MAX_CHAR_IN_LINE];

    int book_i = 0, book_count = 0;

    while(fch != EOF)
    {
        fch = fgetc(fbook);

        if(fch == '\n')
        {
            strcat(lines[book_count], buffer);
            book_count++;
            bzero(buffer, MAX_CHAR_IN_LINE);
            book_i = 0;
            continue;
        }
        else
        {
            buffer[book_i] = fch;
            book_i++;
        }
    }

    //get the instructions !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    int inst_i = 0, inst_count = 0;fch = 'a';

    while(fch != EOF)
    {
        fch = fgetc(finst);

        if (fch == ' ' || fch == '\n')
        {
            inst_count++;
            inst_i = 0;
            continue;
        }
        else
        {
            inst_i++;
        }
    }

    int n_instructions = inst_count / 2;
    struct instruction_s instructions[n_instructions];

    rewind(finst);

    inst_i = 0;inst_count = 0;fch = 'a';

    while(fch != EOF)
    {
        fch = fgetc(finst);

        if(fch == ' ' || fch == '\n')
        {
            if (inst_count % 2 == 0)
            {
                instructions[(inst_count + 1) / 2].step = atoi(buffer);

            }
            else
            {
                instructions[inst_count / 2].index = atoi(buffer);
            }
            inst_count++;
            bzero(buffer, MAX_CHAR_IN_LINE);
            inst_i = 0;
            continue;
        }
        else
        {
            buffer[inst_i] = fch;
            inst_i++;
        }
    }

    for (inst_i = 1; inst_i < inst_count / 2; ++inst_i)
    {
        instructions[inst_i].step += instructions[inst_i - 1].step; // conversation to direct line numbers
    }

    // make the sentence !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    char sentence[SENTENCE_LENGTH];
    //bzero(sentence, SENTENCE_LENGTH);
    get_sentence(lines, instructions, n_instructions, sentence);

    // punc free and lower !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    printf("\n%s\n", sentence);

    /*

    for(inst_i = 0; inst_i < inst_count / 2; inst_i++)
    {
        printf("instructions[%d].step: %d\n", inst_i, instructions[inst_i].step);
        printf("instructions[%d].index: %d\n", inst_i, instructions[inst_i].index);
    }

    for(book_i = 0; book_i < book_count; book_i++) {
        printf("Line[%d]: %s\n", book_i, lines[book_i]);
    }

    */

    fclose(fbook);
    fclose(finst);

    return EXIT_SUCCESS;
}


/* A function get_word that takes a line s and an index n, and returns the selected word.
 */

char* get_word(char* s, int n)
{
    int word_i = 0, word_count = 0;
    char poss_word[MAX_CHAR_IN_LINE];

    for (int i = 0; i < strlen(s); ++i)
    {
        if (s[i] == ' ') {continue;}
        else if (word_count == (n - 1))
        {
            if (s[i] == ' ' || s[i] == '\r' || s[i] == '\n' || s[i] == '\0')
            {
                printf("a\n");
                //bzero(s, strlen(s));
                strcpy(s, poss_word);
                return s;
                printf("e\n");
                break;
                printf("d\n");
            }
            else
            {
                poss_word[word_i] = s[i];
                word_i++;
                printf("b\n");
            }
        }
        else if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\r' || s[i + 1] == '\n' || s[i + 1] == '\0'))
        {
            word_count++;
            printf("c\n");
        }
    }
}



/* A function that takes the lines of a book, a sequence of instructions, the number of
 * instructions n_instructions, and an empty sentence where to store the extracted sentence.
 */

void get_sentence(char lines[MAX_LINE][MAX_CHAR_IN_LINE], struct instruction_s* instructions, int n_instructions, char* sentence)
{
    for (int i = 0; i < n_instructions; ++i)
    {
        strcat(sentence, get_word(lines[instructions[i].step - 1], instructions[i].index));
        //printf("%s\n", lines[instructions[i].step - 1]);
    }
}

/*
By the time she had caught the flamingo and brought it back, the fight
This here young lady, said the Gryphon, she wants for to know your
who will put on your shoes and stockings for you now, dears? Im sure
Presently she began again. I wonder if I shall fall right THROUGH the
Lastly, she pictured to herself how this same little sister of hers
and the whole party at once crowded round her, calling out in a confused
*/



/*
                char *type = malloc(strlen(poss_word)+2);  // allocate memory from the heap
                strcpy(type, poss_word);
                char* anan = " ";
                strcat(type, anan);
                return(type);

*/