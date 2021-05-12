#include "dictionary.h"

bool add_record(datum * key, datum * data)
{
    GDBM_FILE db;
    db = gdbm_open(DB_FILENAME, 0, GDBM_WRCREAT, 0644, NULL);
    if (!db)
    {
        printf("%s\n", gdbm_strerror(gdbm_errno));
        return false;
    }
    if (gdbm_store(db, *key, *data, GDBM_INSERT))
    {
        printf("%s\n Record Not Added. ", gdbm_strerror(gdbm_errno));
        gdbm_close(db);
        return false;
    }
    gdbm_close(db);
    return true;
}

/*bool remove_record(datum * key)
{}

bool change_record(datum * key, datum * data)
{}*/

bool get_record(char * word, char * translation)
{
    GDBM_FILE db;
    datum key, data;

    db = gdbm_open(DB_FILENAME, 0, GDBM_WRCREAT, 0, NULL);
    if (!db)
    {
        printf("%s\n", gdbm_strerror(gdbm_errno));
        return false;
    }

    key.dptr = word;
    key.dsize = strlen(word);

    data = gdbm_fetch(db, key);

    if (data.dptr)
    {
        strcpy(translation, data.dptr);
        return true;
    }
    return false;
}

bool list_records(char letter)
{
    GDBM_FILE db;
    datum key, next, data;
    int n = 1;

    db = gdbm_open(DB_FILENAME, 0, GDBM_WRCREAT, 0, NULL);
    if (!db)
    {
        printf("%s\n", gdbm_strerror(gdbm_errno));
        return false;
    }

    key =gdbm_firstkey(db);
    while(key.dptr)
    {
        data = gdbm_fetch(db, key);
        if((letter < 'a' || letter > 'z') || key.dptr[0] == letter)
        {
            printf("(%d) %s:\t%s\n", n++, key.dptr, data.dptr);
        }
        next = gdbm_nextkey(db, key);
        key = next;
    }
    gdbm_close(db);
    return true;
}
