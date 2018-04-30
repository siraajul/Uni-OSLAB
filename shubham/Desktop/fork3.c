    #include <stdio.h>
    #include <unistd.h>
    main() {
           int i;
           
           // create 3 child processes
           for (i = 0; i < 3; i++) {
               if (fork() == 0) {
                          printf("Child process no.%d with ID: %d created from parent process\n", i);
                          break;
                          }
               }
               // wait for each child process to finish
               
    }
