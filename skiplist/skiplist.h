#ifndef _SKIPLIST
#define _SKIPLIST

typedef struct skiplistNode {
    char *obj;
    double score;
    struct skiplistNode *backword;

    struct skiplistLevel {
        struct skiplistNode *forward;
        unsigned int span;
    } level[];
} skiplistNode;


typedef struct skiplist {
    sturct skiplistNode *header, *tail;
    unsigned long length;
    int level;
} skiplist;

#endif
