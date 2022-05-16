#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>


void action(int p){  
     sleep(1); 
     printf("Switching\n");
}

int main(int argc, char *argv[]){  
    pid_t pid;
if((pid=fork())>0){//parent  
    sleep(3);
    while(1){
        printf("Parent is running\n");  
        kill(pid, SIGUSR1);  
        signal(SIGUSR1, action);  
        pause();
    }
}
else  //child code
    while(1){//child  
    wait(0);
        signal(SIGUSR1, action);  
        kill(getppid(), SIGUSR1);
        printf("Child is running\n");  
        pause();

        
    }
}
