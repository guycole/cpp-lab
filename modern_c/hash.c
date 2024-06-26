// clang -o hash -Wall hash.c
// gcc -o hash -Wall hash.c

#include <search.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info {                   /* This is the info stored in the table */
    int age, room;          /* other than the key. */
};

#define NUM_EMPL        5000    /* # of elements in search table. */



int main(void) {
//int main(int argc, char *argv[]) {
    printf("hello world\n");

    char str[BUFSIZ]; /* Space to read string */
    struct info info_space[NUM_EMPL]; /* Space to store employee info. */
    struct info *info_ptr = info_space; /* Next space in info_space. */
    ENTRY item;
    ENTRY *found_item; /* Name to look for in table. */
    char name_to_find[30];
    int i = 0;

    /* Create table; no error checking is performed. */
    (void) hcreate(NUM_EMPL);

    while (scanf("%s%d%d", str, &info_ptr->age, &info_ptr->room) != EOF && i++ < NUM_EMPL) {
        /* Put information in structure, and structure in item. */
        item.key = strdup(str);
        item.data = info_ptr;
        info_ptr++;
        /* Put item into table. */
        (void) hsearch(item, ENTER);
    }

    /* Access table. */
    item.key = name_to_find;
    item.key = "bogus";
    //while (scanf("%s", item.key) != EOF) {
        if ((found_item = hsearch(item, FIND)) != NULL) {
            /* If item is in the table. */
            (void)printf("found %s, age = %d, room = %d\n",
                                 found_item->key,
                                 ((struct info *)found_item->data)->age,
                                 ((struct info *)found_item->data)->room);
                     } else
                             (void)printf("no such employee %s\n", name_to_find);
             //}
             hdestroy();

    return EXIT_SUCCESS;
}
