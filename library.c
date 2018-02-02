#define _GNU_SOURCE // RTLD_NEXT, must define this before ANY standard header
#include <dlfcn.h>  // dlsym()
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

// Return OLCF_PID if set, otherwise return getpid() value
pid_t getpid(void) {
    const char* olcf_pid = getenv("OLCF_PID");
    if(olcf_pid != NULL) {
        return atoi(olcf_pid);
    } else {
        pid_t (*real_getpid)() = dlsym(RTLD_NEXT, "getpid");
        return (*real_getpid)();
    }
}