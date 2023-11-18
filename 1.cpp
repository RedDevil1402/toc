#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid, parent_pid;

    // Create a new process
    pid = fork();

    if (pid < 0) {
        // Fork failed
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Child process - PID: %d, Parent PID: %d\n", getpid(), getppid());
    } else {
        // Parent process
        printf("Parent process - PID: %d, Child PID: %d\n", getpid(), pid);
    }

    return 0;
}

