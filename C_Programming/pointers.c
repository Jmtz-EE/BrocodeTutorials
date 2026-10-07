#include <stdio.h> 

int main(void)
{
    int b = 42; 
    int *a = &b; //assing b adress to a so a points to b 

    /* Printing output in C*/
    // int printf(const char* restrict format, ....) writes the results to the stdout stream 
    // int fprintf(FILE* stream, const char* restrict format, ....) writes the results to the ouput stream indicated
    /* Reading input data */
    // int scanf(const char* restrict formar, ....) reads data from the stdin 
    // fscanf(FILE* restrict stream, const char* format) reads data from selected stream 
    /* Format Specifiers
        %c - for a character type 
        %d - for a signed integer type 
        %f - for float type 
        %i - for signed integer
        %s - for string
        %p - for pointer
        .... and others 
    */

    printf("b: %d\n", b); 
    printf("&b: %p\n", &b); 
    printf("a: %p\n",a); 

    *a = 50; 
    
    printf("b: %d\n", b); 
    printf("&b: %p\n", &b); 
    printf("a: %p\n",a); 

    int c, d, e, f ; 
    c = d = e = f = 0; //My note: This is allowed in C to initialize all to 0 
    printf("Enter 3 numbers: "); 
    scanf("%d %d %d", &c, &d, &e); 

    return 0;     
}