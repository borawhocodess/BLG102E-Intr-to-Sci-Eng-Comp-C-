#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 16384
#define MAX_CHAR_IN_LINE 256
#define SENTENCE_LENGTH 16384

void remove_punct_and_make_lower_case(char *p)
{
    char *src = p, *dst = p;

    while (*src)
    {
       if (ispunct((unsigned char)*src))
       {
          /* Skip this character */
          src++;
       }
       else if (isupper((unsigned char)*src))
       {
          /* Make it lowercase */
          *dst++ = tolower((unsigned char)*src);
          src++;
       }
       else if (src == dst)
       {
          /* Increment both pointers without copying */
          src++;
          dst++;
       }
       else
       {
          /* Copy character */
          *dst++ = *src++;
       }
    }

    *dst = 0;
}


int main(int argc, char const *argv[])
{
    char sentence[SENTENCE_LENGTH];

    printf("sentence: \n");
    fgets(sentence, SENTENCE_LENGTH, stdin);
    // punc free and lower !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    remove_punct_and_make_lower_case(sentence);

    printf("\n%s\n", sentence);


    return EXIT_SUCCESS;
}
