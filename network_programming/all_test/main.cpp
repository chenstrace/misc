#include "headers.h"

extern int pipe_test(int argc, char *argv[]);
extern int socketpair_test(int argc, char *argv[]);


int main(int argc, char** argv) {
    pipe_test(argc,argv);
    
    
    //socketpair_test(argc,argv);
    return 0;
}

