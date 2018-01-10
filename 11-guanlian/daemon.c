#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <pthread.h>

int main()
{
    pid_t child;
    child = fork();
    if(child == 0)
    {
        // sleep(2);
        char out[10];
        scanf("%s",out);
        printf("child pid:%d %s\n",getpid(),out);
        pause();
        // while(1)
        // {
        //             printf("child pid\n",getpid());
        //             sleep(2);
        // }
    }   
    else if(child >0)
    {
        char out[10];
        sleep(2);
        scanf("%s",out);
        printf("parent pid:%d %s\n",getpid(),out);
        pause();
    }
    printf("parent pid:%d exit\n",getpid());
    return 0;
}