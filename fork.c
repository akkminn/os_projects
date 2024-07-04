#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("This is the child process with PID: %d\n", getpid());
    } else {
        // Parent process
        printf("This is the parent process with PID: %d\n", getpid());
    }

    return 0;
}
