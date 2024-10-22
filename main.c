#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <stdint.h>
#include <inttypes.h>


int main()
{
    uint64_t nanosec;

    struct timespec real;

    clock_gettime(CLOCK_REALTIME, &real);
    nanosec = (uint64_t)real.tv_sec * 1000000000 + real.tv_nsec;

    printf("%lu %lu\n", real.tv_sec, real.tv_nsec);
    printf("0x%lx 0x%lx\n", real.tv_sec, real.tv_nsec);

    // printf("%lu\n", nanosec);
    printf("PRIu64 = %" PRIu64 "\n", nanosec);

    return 0;
}



