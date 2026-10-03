

#include <stdio.h> 

#define ARRAY_LENGTH = 240
/*  #define is a preprocessor macro 

    #macros can also be redefined - good & bad 

    #macros can be defined outside of source code when compiling the program with gcc and clang
    

    wants the preprocessor to go to all instances of ARRAY_LENGTH and replace it with 240 
    since this is handled by the preproccesor this happens before the code is even compiled
    basically doing text replacement

    DOWNSIDE - declaring a constant with #define makes it globally defined 
    must be careful with naming 

*/

//const int ARRAY_LENGTH = 240;
/*  telling compiler that we want a variable that will never change
    so the const int will be handled as a regular variable except that the compiler will 
    be under the assumption that it will never change 
    
    DOWNSIDE - since the const has a type in this case int not using simple text replacement
    but since the compiler knows that this is an int it can check for invalid behavior so can be safer option
    
    Scope control - declaration will allow it to be scoped to a given level which is useful to avoid naming conflicts in 
    a program 


*/ 

int main() 
{


    printf("%d\n" , ARRAY_LENGTH); 
}