#include <sys/timex.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>


int main()
{
    struct timex tx;
    int ret;

    tx.modes = 0;
    ret = adjtimex(&tx);
    if (ret < 0)
    {
        printf("error: %s\n", strerror(errno));
    }

    printf("adjtimex ret: %d\n", ret);
    printf("tx.status: %d\n", tx.status);

    return 0;
}
