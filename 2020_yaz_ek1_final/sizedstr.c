#include <stdio.h>
#include <stdlib.h>

struct sizedstr_s {
    char *content;
    int length;
};

typedef struct sizedstr_s sizedstr_t;

sizedstr_t new_sizedstr(char s[])
{
    sizedstr_t x = { NULL, 0 };
    return x;
}

void print_sizedstr(const sizedstr_t x)
{
}

int sizedstr_len(const sizedstr_t x)
{
    return 0;
}

sizedstr_t sizedstr_cat(const sizedstr_t x1, const sizedstr_t x2)
{
    sizedstr_t x = { NULL, 0 };
    return x;
}

int sizedstr_cmp(const sizedstr_t x1, const sizedstr_t x2)
{
    return 2;
}

void delete_sizedstr(sizedstr_t x)
{
}

int main(int argc, char *argv[])
{
    if (argv[1][0] == 'p') {
        sizedstr_t x = new_sizedstr(argv[2]);
        print_sizedstr(x);
        printf("\n");
        delete_sizedstr(x);
    } else if (argv[1][0] == 'l') {
        sizedstr_t x = new_sizedstr(argv[2]);
        printf("%d\n", sizedstr_len(x));
        delete_sizedstr(x);
    } else if (argv[1][0] == 'c') {
        sizedstr_t x1 = new_sizedstr(argv[2]);
        sizedstr_t x2 = new_sizedstr(argv[3]);
        sizedstr_t x3 = sizedstr_cat(x1, x2);
        print_sizedstr(x3);
        printf("\n");
        printf("%d\n", sizedstr_len(x3));
        delete_sizedstr(x1);
        delete_sizedstr(x2);
        delete_sizedstr(x3);
    } else if (argv[1][0] == 'o') {
        sizedstr_t x1 = new_sizedstr(argv[2]);
        sizedstr_t x2 = new_sizedstr(argv[3]);
        int cmp = sizedstr_cmp(x1, x2);
        printf("%d\n", cmp);
        delete_sizedstr(x1);
        delete_sizedstr(x2);
    }

    return EXIT_SUCCESS;
}
