#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <gdbm.h>

#define DB_FILENAME "dictionary_db"

// Interface function prototypes

bool run_dictionary();
void press_key();
bool add_word();
bool change_word();
bool delete_word();
bool translate_word();
bool list_all();
bool list_letter();

// Database function prototypes

bool add_record(datum * key, datum * data);
bool remove_record(datum * key);
bool change_record(datum * key, datum * data);
bool get_record(char * word, char * translation);
bool list_records(char letter);