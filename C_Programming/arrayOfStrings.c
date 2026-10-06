#include <stdio.h> 
#include <string.h> 
int main()
{
    //Array of strings 

    //String is just an array of characters 
    //can store more than one string by using a 2D array 
    //char name[][max number of characters in each string]
    //organizing array to look like a matrix to visualize how string are held
    char fruits[][10] = {"Apple", 
                         "Banana", 
                         "Coconut", 
                         "Pinnaple", 
                         "Lemon"}; 
    //each string can be in different memory locations 
    int size = sizeof(fruits) / sizeof(fruits[0]); 


    for (int i = 0; i < size; i++)
    {
        printf("%s\n", fruits[i]);
    }

    //2D array of chars is stored in contigous blocks of memory 
    char fruit[][10] = {
        {'a','b','c','d','e','\0','\0','\0'}, 
        {'a','b','c','d','e','\0','\0','\0'},
        {'a','b','c','d','e','\0','\0','\0'}
    };

    //Exercise 
    //array of string[3 names][each string is 25 characters]
    char names[3][25] = {0}; // initializing to 0 allows us to use clear any possible garbage 

    printf("Enter a name: "); 
    fgets(names[0]); //ignores any white spaces -review more on fgets

    return 0; 

}