#ifndef _SKIPLIST
#define _SKIPLIST

typedef struct zskiplistNode {
    char *obj;
    double score;
    struct zskiplistNode *backword;

    struct skiplistLevel {
        struct zskiplistNode *forward;
        unsigned int span;
    } level[];
} zskiplistNode;


typedef struct skiplist {
    zskiplistNode *header, *tail;
    unsigned long length;
    int level;
} zskiplist;


zskiplist *zslCreate(void);
void zslFree(zskiplist *zsl);

#endif
