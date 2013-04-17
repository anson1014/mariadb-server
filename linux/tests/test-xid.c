#include <stdio.h>
#include <toku_stdint.h>
#include <unistd.h>
#include <assert.h>
#include "toku_os.h"
#include <syscall.h>

static int gettid(void) {
    return syscall(__NR_gettid);
}

int main(void) {
    assert(toku_os_getpid() == getpid());
    assert(toku_os_gettid() == gettid());
    return 0;
}
