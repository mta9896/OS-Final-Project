#include "types.h"
#include "stat.h"
#include "user.h"

int main(){
    int pid;
    printf(1,"Father pid is %d" ,getpid());
    sleep(10);
    printf(1,"Father is awake");
    pid = fork();
    if(pid  != 0 ){ //father
        for(int i=0; i<50; i++){
            printf(1,"Process %d is printing for the %d time" , getpid() , i);

        }
    }

    else if(pid  == 0 ){ //child
        for(int i=0; i<50; i++){
            printf(1,"Process %d is printing for the %d time" , getpid() , i);

        }
        exit();
    }


	return 0;
}

