#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid;

    // forking das child process
    pid = fork();

    if (pid < 0)
    {
        // das ist ein error
        fprintf(stderr, "Fork Failed!");
    }
    else if (pid == 0)
    {
        // das child process ist erstellt
        execlp("/bin/ls", "ls", NULL);
    }
    else
    {
        // parent process
        wait(NULL);
        printf("Child Complete\n");
    }
    return 0;
}