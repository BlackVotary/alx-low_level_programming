#include <stdlib.h>
int main(void)
{
    char *buf = (char *) malloc(1024);
    if (!buf) {
        exit(1);
    }

    free(buf);
    return 0;
}
