#include <stdio.h> 
#include <string.h> //has function that work with strings nicely 
int main(void) // My note: why use void as the argument 
{
    //string are just character arrays that are null terminated

    char test[5]; //verbose method of initializing array
    test[0] = 't';
    test[1] = 'e'; 
    test[2] = 's'; 
    test[3] = 't'; 
    test[40] = '\0'; 

    char test2[5] = "test"; //Using string literal to initialize the array

    char test3[5] = {'t','e','s','t'}; 

    printf("Test 3: %s ", test3);

    //string.h give us strlen

    char mystring[] = "SomeString";
    int length = strlen(mystring);
    printf("length:  %d\n", length); //Null character is not counted towards the length of the stream

    return 0; 
}