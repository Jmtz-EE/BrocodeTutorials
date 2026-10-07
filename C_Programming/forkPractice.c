#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h> 

int main(){
    fork(); // make a child process of the same type 
    printf("Fork testing code");
    return 0; 
}