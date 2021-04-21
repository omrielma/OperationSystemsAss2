#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


// System call numbers
#define SYS_fork    1
#define SYS_exit    2
#define SYS_wait    3
#define SYS_pipe    4
#define SYS_read    5
#define SYS_kill    6
#define SYS_exec    7
#define SYS_fstat   8
#define SYS_chdir   9
#define SYS_dup    10
#define SYS_getpid 11
#define SYS_sbrk   12
#define SYS_sleep  13
#define SYS_uptime 14
#define SYS_open   15
#define SYS_write  16
#define SYS_mknod  17
#define SYS_unlink 18
#define SYS_link   19
#define SYS_mkdir  20
#define SYS_close  21
#define SYS_sigprocmask 22


struct sigaction {
void (*sa_handler) (int);
uint sigmask;
};

void testing1 (int a ){
        printf("im only a test\n");
}
void testing2 (int a ){
        printf("im only a test\n");
}

int main(int argc, char** argv){
        // int *stat = (int*)malloc(sizeof(int));
            // struct perf* perf = (struct perf*)malloc(sizeof(perf));

    // struct sigaction *  act = (struct sigaction*)malloc(sizeof(sigaction));
    // struct sigaction * oldact = (struct sigaction*)malloc(sizeof(sigaction));;
    struct sigaction *act= malloc(sizeof(sigaction));
    struct sigaction *oldact = malloc(sizeof(sigaction));
    act->sa_handler=(void *)malloc(sizeof(void*));
    oldact->sa_handler=(void *)malloc(sizeof(void*));
    testing2(1);
    act->sa_handler=(void*)act;
     printf("%p\n",act->sa_handler);
    act->sigmask=0;    

     int ret = sigaction(0,act,oldact);
     printf("%d\n",ret);

 exit(0);
}