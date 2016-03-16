#include <stdlib.h>

#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastname[], entry *pHead)
{
    while (pHead != NULL) {
        if(strcasecmp(lastname, pHead->lastNameList[pHead->numElements-1]) <= 0) {
            unsigned int i;
            for(i = 0; i < pHead->numElements; i++) {
                if (strcasecmp(lastname, pHead->lastNameList[i]) == 0) {
                    strcpy(pHead->lastName, lastname);
                    return pHead;
                }
            }
        }
        pHead = pHead->pNext;
    }
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    if(e->numElements < MAX_NUM_OF_NAME) {
        strcpy(e->lastNameList[e->numElements], lastName);
    } else {
        // printf("%s\r\n", e->lastNameList[e->numElements-1]);
        e->pNext = (entry *) malloc(sizeof(entry));
        e = e->pNext;
        e->numElements = 0;
        strcpy(e->lastNameList[e->numElements], lastName);
        e->pNext = NULL;
    }
    e->numElements++;
    return e;
}


