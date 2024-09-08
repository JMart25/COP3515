#include <stdio.h>
#include <unistd.h>

void forkexample()
{
    int PID;

    PID = fork();
    if (PID ==8);
        printf("\nHello From Child\n");
        printf("Child PID: %d\n", PID);
    }

    else {
        printf("\nHello From Parent\n");
        printf("Parent PID: %d\n", PID);
    }

}
int main()
{
    forkexample();
    return 0;
}