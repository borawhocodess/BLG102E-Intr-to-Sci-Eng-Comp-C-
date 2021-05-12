#include "dictionary.h"

bool run_dictionary()
{
    printf("\e[1;1H\e[2J"); // clear screen

    int selection;

    printf("1. Edit Dictionary\n");
    printf("1. Examine Dictionary\n");
    printf("1. Exit\n");

    scanf("%d", &selection);

    switch(selection)
    {
        case 1: // Edit
            printf("\e[1;1H\e[2J"); // clear screen
            printf("1. Add\n");
            printf("2. Change\n");
            printf("3. Delete\n");

            scanf("%d", &selection);
            printf("\e[1;1H\e[2J"); // clear screen

            if (selection == 1){add_word();}
            //else if (selection == 2){change_word();}
            //else if (selection == 3){delete_word();}
        break;
        case 2: // Examine
            printf("\e[1;1H\e[2J"); // clear screen
            printf("1. Translate\n");
            printf("2. List All\n");
            printf("3. List Letter\n");

            scanf("%d", &selection);
            printf("\e[1;1H\e[2J"); // clear screen

            if (selection == 1){translate_word();}
            else if (selection == 2){list_all();}
            else if (selection == 3){list_letter();}
        break;
        case 3: // Exit
            return false;
        break;
    }
    return true;
}

void press_key()
{
    char dummy;
    printf("Press a key to continue...\n");
    scanf("%c", &dummy);
}

bool add_word()
{
    char word[50];
    char translation[50];
    bool return_value;

    printf("Add Word ---\n");
    printf("Enter Native Word\n");
    scanf("%s", word);
    printf("Enter Foreign Word\n");
    scanf("%s", translation);

    datum native_word, foreign_word;

    native_word.dptr = word;
    native_word.dsize = strlen(word);
    foreign_word.dptr = translation;
    foreign_word.dsize = strlen(translation);

    return_value = add_record(&native_word, &foreign_word);
    if (return_value) {printf("Record Added.\n");}
    else {printf("Record Could Not Be Added.\n");}

    press_key();

    return return_value;
}

// bool change_word()
// {}

// bool delete_word()
// {}

bool translate_word()
{
    char word[50], translation[50];
    bool return_value;
    printf("Enter the word to translate: \n");
    scanf("%s", word);

    return_value = get_record(word, translation);

    if (return_value)
    {
        printf("%s means %s.\n", word, translation);
    }
    else
    {
        printf("Word %s could not be found. \n", word);
    }

    press_key();

    return return_value;
}

bool list_all()
{
    bool return_value;
    return_value = list_records('0');
    press_key();
    return return_value;
}

bool list_letter()
{
    bool return_value;
    char letter;
    printf("Enter a letter: \n");
    scanf("%c", &letter);
    return_value = list_records(letter);
    press_key();
    return return_value;
}

int main(int argc, char const *argv[])
{
    while(run_dictionary());
    return 0;
}