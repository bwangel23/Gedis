#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

typedef struct listNode {
    double score;

    struct listLevel {
        struct listNode* froward;
        unsigned int spam;
    } level[];
} listNode;

struct plistLevel {
    struct listNode* froward;
    unsigned int spam;
};

typedef struct plistNode {
    double score;
    // 使用指针的话还暂用了一个字节的空间，但使用0长数组的话，只是在内存中结构体的这个位置这里声明了一个标识符，但是实际上并没有声明任何内存空间
    struct plistLevel *level;

} plistNode;


int main(int argc, char *argv[])
{
    listNode *n = malloc(sizeof(listNode) + 1 * sizeof(struct listLevel));
    plistNode *p = malloc(sizeof(plistNode) + 1 * sizeof(struct plistLevel));

    printf("%lu\n", sizeof(listNode) + 1 * sizeof(struct listLevel));
    printf("%lu\n", sizeof(plistNode) + 1 * sizeof(struct plistLevel));

	return 0;
}
