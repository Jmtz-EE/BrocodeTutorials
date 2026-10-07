#include <stdio.h> 

/* argc : stores the total number of command line argumnents */
/* argv: is an array containing each argument as a string*/


int main (int argc, char *argv[])
{
    // argc -> number of arguments
    // argv -> array of arguments 
    /*if (argc > 1)
    {
        printf("Hello, %s!\n", argv[1]); 
    }
    else 
    {
        printf("Hello, World!\n"); 
    }
*/  

    if (argc == 1) //argc will always be one as the ./main will count 
    {
        printf("No command-line arguments passed.\n");
    }
    else 
    {
        for (int i = 0; i < argc; i++)
        {
            printf("Argument %dL %s\n", i, argv[i]); 
        }
        //Actual argumnents in range argv[1] - argv[argc-1]
    }

    return 0;
}