#include<stdio.h> 
int main() 
{ 
    for(int i=0;i<5;i++)

    { 
        if(fork() == 0) 
        { 
            printf("[child] pid %d from [parent] pid %d\n",getpid(),getppid()); 
            exit(0); 
        } 
    } 
    for(int i=0;i<5;i++)
    wait(NULL); 
} 