#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16
#define MAX_NUM_OF_NAME    100
/* TODO: After modifying the original version, uncomment the following
 * line to set OPT properly */
#define OPT 1

typedef struct __PHONE_BOOK_ENTRY {
    unsigned int numElements;
    char lastName[MAX_LAST_NAME_SIZE];
    char lastNameList[MAX_NUM_OF_NAME][MAX_LAST_NAME_SIZE];
    struct __PHONE_BOOK_ENTRY *pNext;

} entry;


entry *findName(char lastname[], entry *pHead);
entry *append(char lastName[], entry *e);

#endif
